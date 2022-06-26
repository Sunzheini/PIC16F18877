/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18877
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB             :  MPLAB X 5.45

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "pin_manager.h"
#include "../lcd_library.h"
#include "pin_manager.h"

#define _XTAL_FREQ 1000000

void (*IOCCF0_InterruptHandler)(void);
void (*IOCCF1_InterruptHandler)(void);
void (*IOCCF2_InterruptHandler)(void);
void (*IOCCF3_InterruptHandler)(void);

extern char row,col; // for keypadz

void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATE = 0x00;
    LATD = 0x00;
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISE = 0x04;
    TRISA = 0xFF;
    TRISB = 0xF3;
    TRISC = 0x8F;
    TRISD = 0x00;

    /**
    ANSELx registers
    */
    ANSELD = 0x00;
    ANSELC = 0x00;
    ANSELB = 0xC2;
    ANSELE = 0x04;
    ANSELA = 0xFF;

    /**
    WPUx registers
    */
    WPUD = 0x00;
    WPUE = 0x00;
    WPUB = 0x31;
    WPUA = 0x00;
    WPUC = 0x0F;

    /**
    ODx registers
    */
    ODCONE = 0x00;
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    ODCOND = 0x00;

    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x07;

    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0x0F;


    /**
    IOCx registers 
    */
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF0 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF1 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF2 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF3 = 0;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN0 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN1 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN2 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN3 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP0 = 0;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP1 = 0;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP2 = 0;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP3 = 0;



    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCCF0_SetInterruptHandler(IOCCF0_DefaultInterruptHandler);
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    PIE0bits.IOCIE = 1; 
    
	
    RXPPS = 0x17;   //RC7->EUSART:RX;    
    RC6PPS = 0x10;   //RC6->EUSART:TX;    
}
char keypad[16] = {'1','2','3','A','4','5','6','B','7','8','9','C','*','0','#','D',};
void PIN_MANAGER_IOC(void)
{   
    char key=0;
    char a=0,b=0;
    INTCONbits.GIE=0;
    
    __delay_ms(100);       
	// interrupt on change for pin IOCCF0
    if(IOCCFbits.IOCCF0 == 1)
    {
        IOCCF0_ISR();  
    }	
	// interrupt on change for pin IOCCF1
    if(IOCCFbits.IOCCF1 == 1)
    {
        IOCCF1_ISR();  
    }	
	// interrupt on change for pin IOCCF2
    if(IOCCFbits.IOCCF2 == 1)
    {
        IOCCF2_ISR();  
    }	
	// interrupt on change for pin IOCCF3
    if(IOCCFbits.IOCCF3 == 1)
    {
        IOCCF3_ISR();  
    }	
    clear_display();
//    key=row*4+col;
//    b=key%10;
//    key=key/10;
//    a=key%10;
//    send_data(a+0x30);
//    send_data(b+0x30);
    key=row*4+col-1;
    send_data(keypad[key]);
    DB0_LCD_SetLow();
    DB1_LCD_SetLow();
    DB2_LCD_SetLow();
    DB3_LCD_SetLow();
    INTCONbits.GIE=1;
}

/**
   IOCCF0 Interrupt Service Routine
*/
void IOCCF0_ISR(void) {

    // Add custom IOCCF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF0_InterruptHandler)
    {
        IOCCF0_InterruptHandler();
    }
    IOCCFbits.IOCCF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF0 at application runtime
*/
void IOCCF0_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF0
*/
void IOCCF0_DefaultInterruptHandler(void){
    // add your IOCCF0 interrupt custom code
    // or set custom function using IOCCF0_SetInterruptHandler()
    row = 0;
    DB0_LCD_SetLow();
    DB1_LCD_SetHigh();
    DB2_LCD_SetHigh();
    DB3_LCD_SetHigh();
    if(R1_Key_GetValue()==0)
    {
        col=1;
    }
    else
    {
        DB0_LCD_SetHigh();
        DB1_LCD_SetLow();
        DB2_LCD_SetHigh();
        DB3_LCD_SetHigh();
        if(R1_Key_GetValue()==0)
        {
            col=2;
        }
        else
        {
            DB0_LCD_SetHigh();
            DB1_LCD_SetHigh();
            DB2_LCD_SetLow();
            DB3_LCD_SetHigh();
            if(R1_Key_GetValue()==0)
            {
                col=3;
            }
            else
            {
                DB0_LCD_SetHigh();
                DB1_LCD_SetHigh();
                DB2_LCD_SetHigh();
                DB3_LCD_SetLow();
                if(R1_Key_GetValue()==0)
                {
                    col=4;
                }
            }
        }
    }
}

/**
   IOCCF1 Interrupt Service Routine
*/
void IOCCF1_ISR(void) {

    // Add custom IOCCF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF1_InterruptHandler)
    {
        IOCCF1_InterruptHandler();
    }
    IOCCFbits.IOCCF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF1 at application runtime
*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF1
*/
void IOCCF1_DefaultInterruptHandler(void){
    // add your IOCCF1 interrupt custom code
    // or set custom function using IOCCF1_SetInterruptHandler()
    row=1;
    DB0_LCD_SetLow();
    DB1_LCD_SetHigh();
    DB2_LCD_SetHigh();
    DB3_LCD_SetHigh();
    if(R2_Key_GetValue()==0)
    {
        col=1;
    }
    else
    {
        DB0_LCD_SetHigh();
        DB1_LCD_SetLow();
        DB2_LCD_SetHigh();
        DB3_LCD_SetHigh();
        if(R2_Key_GetValue()==0)
        {
            col=2;
        }
        else
        {
            DB0_LCD_SetHigh();
            DB1_LCD_SetHigh();
            DB2_LCD_SetLow();
            DB3_LCD_SetHigh();
            if(R2_Key_GetValue()==0)
            {
                col=3;
            }
            else
            {
                DB0_LCD_SetHigh();
                DB1_LCD_SetHigh();
                DB2_LCD_SetHigh();
                DB3_LCD_SetLow();
                if(R2_Key_GetValue()==0)
                {
                    col=4;
                }
            }
        }
    }
}

/**
   IOCCF2 Interrupt Service Routine
*/
void IOCCF2_ISR(void) {

    // Add custom IOCCF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF2_InterruptHandler)
    {
        IOCCF2_InterruptHandler();
    }
    IOCCFbits.IOCCF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF2 at application runtime
*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF2
*/
void IOCCF2_DefaultInterruptHandler(void){
    // add your IOCCF2 interrupt custom code
    // or set custom function using IOCCF2_SetInterruptHandler()
    row=2;
    DB0_LCD_SetLow();
    DB1_LCD_SetHigh();
    DB2_LCD_SetHigh();
    DB3_LCD_SetHigh();
    if(R3_Key_GetValue()==0)
    {
        col=1;
    }
    else
    {
        DB0_LCD_SetHigh();
        DB1_LCD_SetLow();
        DB2_LCD_SetHigh();
        DB3_LCD_SetHigh();
        if(R3_Key_GetValue()==0)
        {
            col=2;
        }
        else
        {
            DB0_LCD_SetHigh();
            DB1_LCD_SetHigh();
            DB2_LCD_SetLow();
            DB3_LCD_SetHigh();
            if(R3_Key_GetValue()==0)
            {
                col=3;
            }
            else
            {
                DB0_LCD_SetHigh();
                DB1_LCD_SetHigh();
                DB2_LCD_SetHigh();
                DB3_LCD_SetLow();
                if(R3_Key_GetValue()==0)
                {
                    col=4;
                }
            }
        }
    }
}

/**
   IOCCF3 Interrupt Service Routine
*/
void IOCCF3_ISR(void) {

    // Add custom IOCCF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF3_InterruptHandler)
    {
        IOCCF3_InterruptHandler();
    }
    IOCCFbits.IOCCF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF3 at application runtime
*/
void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF3
*/
void IOCCF3_DefaultInterruptHandler(void){
    // add your IOCCF3 interrupt custom code
    // or set custom function using IOCCF3_SetInterruptHandler()
    row=3;
    DB0_LCD_SetLow();
    DB1_LCD_SetHigh();
    DB2_LCD_SetHigh();
    DB3_LCD_SetHigh();
    if(R4_Key_GetValue()==0)
    {
        col=1;
    }
    else
    {
        DB0_LCD_SetHigh();
        DB1_LCD_SetLow();
        DB2_LCD_SetHigh();
        DB3_LCD_SetHigh();
        if(R4_Key_GetValue()==0)
        {
            col=2;
        }
        else
        {
            DB0_LCD_SetHigh();
            DB1_LCD_SetHigh();
            DB2_LCD_SetLow();
            DB3_LCD_SetHigh();
            if(R4_Key_GetValue()==0)
            {
                col=3;
            }
            else
            {
                DB0_LCD_SetHigh();
                DB1_LCD_SetHigh();
                DB2_LCD_SetHigh();
                DB3_LCD_SetLow();
                if(R4_Key_GetValue()==0)
                {
                    col=4;
                }
            }
        }
    }
}

/**
 End of File
*/