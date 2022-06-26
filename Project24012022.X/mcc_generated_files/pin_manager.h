/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18877
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set channel_ANA1 aliases
#define channel_ANA1_TRIS                 TRISAbits.TRISA1
#define channel_ANA1_LAT                  LATAbits.LATA1
#define channel_ANA1_PORT                 PORTAbits.RA1
#define channel_ANA1_WPU                  WPUAbits.WPUA1
#define channel_ANA1_OD                   ODCONAbits.ODCA1
#define channel_ANA1_ANS                  ANSELAbits.ANSA1
#define channel_ANA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_ANA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_ANA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_ANA1_GetValue()           PORTAbits.RA1
#define channel_ANA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_ANA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_ANA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_ANA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_ANA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define channel_ANA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define channel_ANA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define channel_ANA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LCD_D0 aliases
#define LCD_D0_TRIS                 TRISDbits.TRISD0
#define LCD_D0_LAT                  LATDbits.LATD0
#define LCD_D0_PORT                 PORTDbits.RD0
#define LCD_D0_WPU                  WPUDbits.WPUD0
#define LCD_D0_OD                   ODCONDbits.ODCD0
#define LCD_D0_ANS                  ANSELDbits.ANSD0
#define LCD_D0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LCD_D0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LCD_D0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LCD_D0_GetValue()           PORTDbits.RD0
#define LCD_D0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LCD_D0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LCD_D0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define LCD_D0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define LCD_D0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define LCD_D0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define LCD_D0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define LCD_D0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set LCD_D1 aliases
#define LCD_D1_TRIS                 TRISDbits.TRISD1
#define LCD_D1_LAT                  LATDbits.LATD1
#define LCD_D1_PORT                 PORTDbits.RD1
#define LCD_D1_WPU                  WPUDbits.WPUD1
#define LCD_D1_OD                   ODCONDbits.ODCD1
#define LCD_D1_ANS                  ANSELDbits.ANSD1
#define LCD_D1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LCD_D1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LCD_D1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LCD_D1_GetValue()           PORTDbits.RD1
#define LCD_D1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LCD_D1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LCD_D1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define LCD_D1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define LCD_D1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define LCD_D1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define LCD_D1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define LCD_D1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set LCD_D2 aliases
#define LCD_D2_TRIS                 TRISDbits.TRISD2
#define LCD_D2_LAT                  LATDbits.LATD2
#define LCD_D2_PORT                 PORTDbits.RD2
#define LCD_D2_WPU                  WPUDbits.WPUD2
#define LCD_D2_OD                   ODCONDbits.ODCD2
#define LCD_D2_ANS                  ANSELDbits.ANSD2
#define LCD_D2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LCD_D2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LCD_D2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LCD_D2_GetValue()           PORTDbits.RD2
#define LCD_D2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LCD_D2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LCD_D2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define LCD_D2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define LCD_D2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define LCD_D2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define LCD_D2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define LCD_D2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set LCD_D3 aliases
#define LCD_D3_TRIS                 TRISDbits.TRISD3
#define LCD_D3_LAT                  LATDbits.LATD3
#define LCD_D3_PORT                 PORTDbits.RD3
#define LCD_D3_WPU                  WPUDbits.WPUD3
#define LCD_D3_OD                   ODCONDbits.ODCD3
#define LCD_D3_ANS                  ANSELDbits.ANSD3
#define LCD_D3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LCD_D3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LCD_D3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LCD_D3_GetValue()           PORTDbits.RD3
#define LCD_D3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LCD_D3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LCD_D3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define LCD_D3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define LCD_D3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define LCD_D3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define LCD_D3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define LCD_D3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set LCD_D4 aliases
#define LCD_D4_TRIS                 TRISDbits.TRISD4
#define LCD_D4_LAT                  LATDbits.LATD4
#define LCD_D4_PORT                 PORTDbits.RD4
#define LCD_D4_WPU                  WPUDbits.WPUD4
#define LCD_D4_OD                   ODCONDbits.ODCD4
#define LCD_D4_ANS                  ANSELDbits.ANSD4
#define LCD_D4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LCD_D4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LCD_D4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LCD_D4_GetValue()           PORTDbits.RD4
#define LCD_D4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LCD_D4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define LCD_D4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define LCD_D4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define LCD_D4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define LCD_D4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define LCD_D4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define LCD_D4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set LCD_D5 aliases
#define LCD_D5_TRIS                 TRISDbits.TRISD5
#define LCD_D5_LAT                  LATDbits.LATD5
#define LCD_D5_PORT                 PORTDbits.RD5
#define LCD_D5_WPU                  WPUDbits.WPUD5
#define LCD_D5_OD                   ODCONDbits.ODCD5
#define LCD_D5_ANS                  ANSELDbits.ANSD5
#define LCD_D5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LCD_D5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LCD_D5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LCD_D5_GetValue()           PORTDbits.RD5
#define LCD_D5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LCD_D5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LCD_D5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define LCD_D5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define LCD_D5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define LCD_D5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define LCD_D5_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define LCD_D5_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set LCD_D6 aliases
#define LCD_D6_TRIS                 TRISDbits.TRISD6
#define LCD_D6_LAT                  LATDbits.LATD6
#define LCD_D6_PORT                 PORTDbits.RD6
#define LCD_D6_WPU                  WPUDbits.WPUD6
#define LCD_D6_OD                   ODCONDbits.ODCD6
#define LCD_D6_ANS                  ANSELDbits.ANSD6
#define LCD_D6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LCD_D6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LCD_D6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LCD_D6_GetValue()           PORTDbits.RD6
#define LCD_D6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LCD_D6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LCD_D6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define LCD_D6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define LCD_D6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define LCD_D6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define LCD_D6_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define LCD_D6_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set LCD_D7 aliases
#define LCD_D7_TRIS                 TRISDbits.TRISD7
#define LCD_D7_LAT                  LATDbits.LATD7
#define LCD_D7_PORT                 PORTDbits.RD7
#define LCD_D7_WPU                  WPUDbits.WPUD7
#define LCD_D7_OD                   ODCONDbits.ODCD7
#define LCD_D7_ANS                  ANSELDbits.ANSD7
#define LCD_D7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LCD_D7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LCD_D7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LCD_D7_GetValue()           PORTDbits.RD7
#define LCD_D7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LCD_D7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LCD_D7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define LCD_D7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define LCD_D7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define LCD_D7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define LCD_D7_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define LCD_D7_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set LCD_RS aliases
#define LCD_RS_TRIS                 TRISEbits.TRISE0
#define LCD_RS_LAT                  LATEbits.LATE0
#define LCD_RS_PORT                 PORTEbits.RE0
#define LCD_RS_WPU                  WPUEbits.WPUE0
#define LCD_RS_OD                   ODCONEbits.ODCE0
#define LCD_RS_ANS                  ANSELEbits.ANSE0
#define LCD_RS_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LCD_RS_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LCD_RS_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LCD_RS_GetValue()           PORTEbits.RE0
#define LCD_RS_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LCD_RS_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LCD_RS_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LCD_RS_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LCD_RS_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LCD_RS_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LCD_RS_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define LCD_RS_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set LCD_EN aliases
#define LCD_EN_TRIS                 TRISEbits.TRISE1
#define LCD_EN_LAT                  LATEbits.LATE1
#define LCD_EN_PORT                 PORTEbits.RE1
#define LCD_EN_WPU                  WPUEbits.WPUE1
#define LCD_EN_OD                   ODCONEbits.ODCE1
#define LCD_EN_ANS                  ANSELEbits.ANSE1
#define LCD_EN_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define LCD_EN_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define LCD_EN_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define LCD_EN_GetValue()           PORTEbits.RE1
#define LCD_EN_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define LCD_EN_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define LCD_EN_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define LCD_EN_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define LCD_EN_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define LCD_EN_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define LCD_EN_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define LCD_EN_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/