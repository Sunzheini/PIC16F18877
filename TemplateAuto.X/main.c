/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18877
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "lcd_library.h"
#include "mcc_generated_files/eusart.h"
#define COMMAND_MODE    RS_LCD_SetLow()
#define DATA_MODE       RS_LCD_SetHigh()

//void __interrupt() MyISR() //disable when KeyPad (IOC)
//{
//    if(PIR0bits.INTF==1) // Identify interrupt source,
//    {                    // in this case: INT
//            LATBbits.LATB3 = 1;
//            __delay_ms(1000);
//            LATBbits.LATB3 = 0;
//            PIR0bits.INTF=0; // Clear INT flag
//    }
//}

/*
                         Main application
 */

//UART
char Serial_read(void);
char Serial_send(char *s);
extern volatile uint8_t eusartRxBuffer[30];
extern volatile uint8_t eusartRxCount;

char row=0,col=0; //global vars to hold keypad values
char Rcvd_string[30]; //UART

void main(void)
{
    
    
    
    adc_result_t resultone = 0; // assign ADC1 result
    adc_result_t resulttwo = 0; // assign ADC2 result
    adc_result_t resultthree = 0; // assign ADC3 result
    float v=0;
        
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    // INTERRUPT_GlobalInterruptEnable();


    INTCONbits.GIE=1; // Enable global interrupts
    //disable when KeyPad (IOC)
//    INTCONbits.INTEDG=0; // Falling edge
//    PIR0bits.INTF=0; // Clear interrupt flag
//    PIE0bits.INTE=1; // Enable INT interrupt
    
    
    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

// LCD 4 bit - without libraries
// <editor-fold defaultstate="collapsed" desc="user-description">    
//    COMMAND_MODE;
//    
//    LATD = 0x38; // 8bit mode, send 3 times
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);
//    
//    LATD = 0x38; // 8bit mode
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);
//    
//    LATD = 0x38; // 8bit mode
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);
//    
//    // if you use lower pins of port D, mask commands!
//    ///////////////////////////
//    
//    LATD = 0x20; // 4bit mode
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);      
//    
//    //////////////////////////
//    
//    LATD = 0x20; // higher nibble of 0x28 for 4bit mode
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);      
//    
//    LATD = 0x80; // lower nibble of 0x28 for 4bit mode
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);      
//    
//    //////////////////////////
//      
//    LATD = 0x00; // higher nibble of 0x02 - home
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);   
//    
//    LATD = 0x20; // lower nibble of 0x02 - home
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);       
//        
//    LATD = 0x00; // higher nibble - display on
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2); 
//    
//    LATD = 0xC0; // lower nibble - display on
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2); 
//
//    LATD = 0x00; // higher nibble - clear
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);     
//    
//    LATD = 0x10; // lower nibble - clear
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//       
//    LATD = 0x80; // higher nibble - address on screen
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//    
//    LATD = 0x00; // lower nibble - address on screen
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);    
//    
//    //display on LCD
//    DATA_MODE;  
//    
//    LATD = 'n'; //higher nibble
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
// 
//    LATD = 'n'<<4; //lower nibble
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);      
//    
//    LATD = 'o';
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//
//    LATD = 'o'<<4;
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//    
//    LATD = 'o';
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//
//    LATD = 'o'<<4;
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);  
//    
//    LATD = 'b';
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);     
//    
//    LATD = 'b'<<4;
//    EN_LCD_SetHigh();
//    __delay_ms(2);
//    EN_LCD_SetLow();
//    __delay_ms(2);   
// </editor-fold>

    lcd_init();
    clear_display();
    lcd_display("Boryana e nai-  golemiq zletak");
    
    //everywhere replace C1_Key with DB0_LCD, C2, C3 and C4
    DB0_LCD_SetLow();
    DB1_LCD_SetLow();
    DB2_LCD_SetLow();
    DB3_LCD_SetLow();
    
    __delay_ms(2000);
    clear_display();
    Serial_send(" waiting...");
    
    while (1)
    {
        
        //UART
        //putch('A');
                    
        if(Serial_read()==1)
        {
            clear_display();
            lcd_display(Rcvd_string);
            Serial_send(Rcvd_string);
        }
        
        __delay_ms(500);
        
        // ADC1
//        resultone = ADCC_GetSingleConversion(photosens);
//        v=resultone*3.3/1023.0;    // analog value
//        clear_display();
//        display_int(resultone);
//        // display_float(v);
//        // send_data('v'); // display v to indicate volts
        
            __delay_ms(300);     
        
        // ADC2        
        resulttwo = ADCC_GetSingleConversion(tempsens);
        v=resulttwo*3.3*100/1023.0 - 50;    // analog value in degrees
        clear_display();
        // display_int(resulttwo);
        display_float(v);
        send_data(0xDF); // degree symbol
        send_data('C');
        
        __delay_ms(300);   
        
//        // ADC3       trqbva programa mai
//        resultthree = ADCC_GetSingleConversion(dht11);
//        v=resultthree*3.3/1023.0;    // analog value
//        clear_display();
//        display_int(resultthree);
               
        __delay_ms(1000);       
       
         //Button 1 BUZZER   
        if(PORTBbits.RB4==0)
        {
            LATBbits.LATB2 = 1;
            __delay_ms(500);
            LATBbits.LATB2 = 0;
            __delay_ms(500);
            
            LATBbits.LATB3 = 1;
            __delay_ms(500);
            LATBbits.LATB3 = 0;
            __delay_ms(500);           
            
            
        }
        
         // Button 2 LED
        if(PORTBbits.RB5==0)
        {
            LED_Toggle();
            __delay_ms(500);
        }
        
        
    }
}

char Serial_read(void)
{
char rcvd=0, count = 0, flag=0;
while(eusartRxCount>0)
    {
                // rcvd=getch(); //UART single char
        rcvd=EUSART_Read();
        if(rcvd!='\0')
        {
            if((rcvd!='\n')&&(count<30))
            {
                Rcvd_string[count]=rcvd;
                count++;
                flag=0;
            }
            else
            {
                flag=1;
                Rcvd_string[count-1]='\0';
                count=0;
            }
        }
    }
return flag;
}

char Serial_send(char *s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        putch(s[i]);
    }
}

/**
 End of File
*/