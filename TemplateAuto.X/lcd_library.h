/* 
 * File:   lcd_library.h
 * Author: Prabhu
 *
 * Created on January 5, 2018, 7:57 PM
 */

#ifndef LCD_LIBRARY_H
#define	LCD_LIBRARY_H

#ifdef	__cplusplus
extern "C" {
#endif
			/*These are the deffinitions need to be defined for different hardwares connections*/

#define LCD_pin_init 		TRISD&=~((1<<4)|(1<<5)|(1<<6)|(1<<7))	  //making all lcd pins as output pins
#define rs 				RE0													
#define e				RE1														
#define	DB7				RD7
#define	DB6				RD6
#define	DB5				RD5
#define	DB4				RD4
#define clearnibble		DB7=DB6=DB5=DB4=0
#define	display_charect	16

// Public functions
void lcd_init(void);
void lcd_display( char display[]);
void clear_display(void);
void display_float(double floatnum);
void display_int(unsigned int digit5);
void LCD_Lshift(void);
void LCD_Rshift(void);
void LCD_home(void);
void send_data(char data_);
void send_command(char command_);

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_LIBRARY_H */

