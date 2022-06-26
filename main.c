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

//int stop_watch = 0;
int stop_watchflag = 0;
int stop_seconds = 0;
int stop_minutes = 0;
int stop_hours = 0;

//LCD Functions
//-----------------------------------------------------------//

// function to write command on LCD
void lcd_cmd(unsigned char cmd)
{
    LCD_RS_SetLow();
	LATD = cmd;
	LCD_EN_SetHigh();
    __delay_ms(2);
    LCD_EN_SetLow();
    __delay_ms(2);
}

// function to write data on LCD
void lcd_data(unsigned char dat)
{
    LCD_RS_SetHigh();
	LATD = dat;	
	LCD_EN_SetHigh();
    __delay_ms(2);
    LCD_EN_SetLow();
    __delay_ms(2);
}

void lcd_init()
{
	lcd_cmd(0x38); __delay_ms(5); //2 lines and 5 x 7 matrix
	lcd_cmd(0x02); __delay_ms(5); // Return Home
	lcd_cmd(0x01); __delay_ms(5); //Clear screen
	lcd_cmd(0x0C); __delay_ms(5); //Display On, Cursor Off
	lcd_cmd(0x06); __delay_ms(5); //Increment cursor (shift to right)
	lcd_cmd(0x80); __delay_ms(5); //Force tp beginning of 1st line
}

void cursorxy(char x, char y)
{
	if( ( x < 1 || x > 2) || (y < 1 || y > 16) )
	{
		x = 1;
		y = 1;
	}
	if(x == 1)
	lcd_cmd(0x7F+y);
	else
	lcd_cmd(0xBF+y);
}

//function to print any input value upto the desired digit on lcd
void lcd_print(char row, char coloumn, unsigned int value, int digits)
{
	unsigned int temp;
	unsigned int unit;
	unsigned int tens;
	unsigned int hundred;
	unsigned int thousand;
	unsigned int million;
	
	unsigned char flag=0;
	
	if(row==0||coloumn==0)
	{
		cursorxy(1,1);
	}
	else
	{
		cursorxy(row,coloumn);
	}
	if(digits==5 || flag==1)
	{
		million=value/10000+48;
		lcd_data(million);
		flag=1;
	}
	if(digits==4 || flag==1)
	{
		temp = value/1000;
		thousand = temp%10 + 48;
		lcd_data(thousand);
		flag=1;
	}
	if(digits==3 || flag==1)
	{
		temp = value/100;
		hundred = temp%10 + 48;
		lcd_data(hundred);
		flag=1;
	}
	if(digits==2 || flag==1)
	{
		temp = value/10;
		tens = temp%10 + 48;
		lcd_data(tens);
		flag=1;
	}
	if(digits==1 || flag==1)
	{
		unit = value%10 + 48;
		lcd_data(unit);
	}
	if(digits>5)
	{
		lcd_data('e');
	}
}

void lcd_out(char x, char y, char *str)
{
	cursorxy(x,y);
	while(*str)
	{
		lcd_data(*str);
		str++;
	}

}

//ISR on Button0
//-----------------------------------------------------------//

char start = 0; // global variable for the interrupt

void __interrupt() MyISR() //cannot return data!
{
    if(PIR0bits.INTF == 1) //check interrupt flag to identify source of interrupt
    {
        
        IO_RB3_Toggle();
        stop_watchflag = 1;
        __delay_ms(300);

        PIR0bits.INTF = 0; //clear flag INT
    }    
}

//-----------------------------------------------------------//

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

//Variables
//-----------------------------------------------------------//

    adc_result_t voltage=0; //for ADC on A1
    unsigned int temp_holder=0; //for ADC on A1
    
//LCD
//--------------------------------------------------//

    lcd_init();
   
    lcd_out(1,1,"Maxi");
	//lcd_print(2,1,stop_watch,4);
	lcd_print(2,1,stop_minutes,2);
	lcd_data(46);
	lcd_print(2,4,stop_seconds,2);
	__delay_ms(100);
    
//Set-up Interrupts
//-----------------------------------------------------------//   
 
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    INTCONbits.GIE = 1; //global int enable, also needed for keypad
    INTCONbits.INTEDG = 0; //rising or falling edge
    PIR0bits.INTF = 0; //clear interrupt flag
    PIE0bits.INTE = 1; //enable INT interrupt
    
    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();   
    
//--------------------------------------------------//
    while (1)
    {

//Read ADC on A5 every 2 sec (temp)
//-----------------------------------------------------------//        
    
    //for LM35
		voltage = ADCC_GetSingleConversion(channel_ANA1);
        temp_holder=voltage*3.22;
        lcd_print(1,10,temp_holder,2);
        lcd_data(223);
        lcd_data('C');
        
//        voltage = ADCC_GetSingleConversion(channel_ANA1);
//		voltage = voltage * 3.22;
//		
//		//lcd_print(1,10,voltage,4);
//		//lcd_out(1,15,"mV");
//		
//		voltage = (voltage/10);
//		temp_holder = (voltage/10);
//		lcd_print(1,10,temp_holder,2);
//		lcd_data(46);
//		
//		voltage = voltage % 10;
//		lcd_print(1,13,voltage,1);
//		
//		lcd_data(223);
//		lcd_data('C');
//		//lcd_out(2,15," C");
    
//Print temp
//-----------------------------------------------------------//
		lcd_out(2,10,"       "); __delay_ms(5);

		if (temp_holder >= 26){
			lcd_out(2,10,"Too hot");
		}
		else if (temp_holder >= 22){
			lcd_out(2,10,"Warm");
		}
		else if (temp_holder >= 20){
			lcd_out(2,10,"Mild");
		}
		else if (temp_holder >= 17){
			lcd_out(2,10,"Cold");
		}
		else{
			lcd_out(2,10,"Freezing");
		}   
        
//Stopwatch
//-----------------------------------------------------------//
			
		if (stop_watchflag){
			if(stop_seconds<59){
				stop_seconds++;
			}
			else{
				stop_seconds=0;
				if(stop_minutes<59){
					stop_minutes++;
				}
				else{
					stop_minutes = 0;
					stop_hours++;
				}
			}
		}
		else{
			stop_hours = 0;
			stop_minutes=0;
			stop_seconds=0;
		}
		lcd_print(2,1,stop_hours,2);
		lcd_data(46);
		lcd_print(2,4,stop_minutes,2);
		lcd_data(46);
		lcd_print(2,7,stop_seconds,2);
			
        
//-----------------------------------------------------------//	
						
		__delay_ms(1000);
	
//-----------------------------------------------------------//        
        






//-----------------------------------------------------------//                
//        //Button1
//        if(PORTBbits.RB0 == 0){
//            IO_RB2_Toggle();
//            __delay_ms(300);
//        }
        //Button2
        if(PORTBbits.RB4 == 0){
            IO_RB5_Toggle();
            stop_watchflag = 0;
            __delay_ms(300);
        }
        
        
    }
}
/**
 End of File
*/