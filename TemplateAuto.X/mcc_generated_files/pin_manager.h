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

// get/set photosens aliases
#define photosens_TRIS                 TRISAbits.TRISA0
#define photosens_LAT                  LATAbits.LATA0
#define photosens_PORT                 PORTAbits.RA0
#define photosens_WPU                  WPUAbits.WPUA0
#define photosens_OD                   ODCONAbits.ODCA0
#define photosens_ANS                  ANSELAbits.ANSA0
#define photosens_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define photosens_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define photosens_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define photosens_GetValue()           PORTAbits.RA0
#define photosens_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define photosens_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define photosens_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define photosens_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define photosens_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define photosens_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define photosens_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define photosens_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set tempsens aliases
#define tempsens_TRIS                 TRISAbits.TRISA1
#define tempsens_LAT                  LATAbits.LATA1
#define tempsens_PORT                 PORTAbits.RA1
#define tempsens_WPU                  WPUAbits.WPUA1
#define tempsens_OD                   ODCONAbits.ODCA1
#define tempsens_ANS                  ANSELAbits.ANSA1
#define tempsens_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define tempsens_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define tempsens_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define tempsens_GetValue()           PORTAbits.RA1
#define tempsens_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define tempsens_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define tempsens_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define tempsens_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define tempsens_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define tempsens_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define tempsens_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define tempsens_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set dht11 aliases
#define dht11_TRIS                 TRISAbits.TRISA4
#define dht11_LAT                  LATAbits.LATA4
#define dht11_PORT                 PORTAbits.RA4
#define dht11_WPU                  WPUAbits.WPUA4
#define dht11_OD                   ODCONAbits.ODCA4
#define dht11_ANS                  ANSELAbits.ANSA4
#define dht11_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define dht11_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define dht11_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define dht11_GetValue()           PORTAbits.RA4
#define dht11_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define dht11_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define dht11_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define dht11_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define dht11_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define dht11_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define dht11_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define dht11_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set Interrupt aliases
#define Interrupt_TRIS                 TRISBbits.TRISB0
#define Interrupt_LAT                  LATBbits.LATB0
#define Interrupt_PORT                 PORTBbits.RB0
#define Interrupt_WPU                  WPUBbits.WPUB0
#define Interrupt_OD                   ODCONBbits.ODCB0
#define Interrupt_ANS                  ANSELBbits.ANSB0
#define Interrupt_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Interrupt_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Interrupt_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Interrupt_GetValue()           PORTBbits.RB0
#define Interrupt_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Interrupt_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Interrupt_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Interrupt_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Interrupt_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define Interrupt_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define Interrupt_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define Interrupt_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set Buzzer aliases
#define Buzzer_TRIS                 TRISBbits.TRISB2
#define Buzzer_LAT                  LATBbits.LATB2
#define Buzzer_PORT                 PORTBbits.RB2
#define Buzzer_WPU                  WPUBbits.WPUB2
#define Buzzer_OD                   ODCONBbits.ODCB2
#define Buzzer_ANS                  ANSELBbits.ANSB2
#define Buzzer_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Buzzer_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Buzzer_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Buzzer_GetValue()           PORTBbits.RB2
#define Buzzer_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Buzzer_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Buzzer_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Buzzer_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Buzzer_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define Buzzer_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define Buzzer_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define Buzzer_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISBbits.TRISB3
#define LED_LAT                  LATBbits.LATB3
#define LED_PORT                 PORTBbits.RB3
#define LED_WPU                  WPUBbits.WPUB3
#define LED_OD                   ODCONBbits.ODCB3
#define LED_ANS                  ANSELBbits.ANSB3
#define LED_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_GetValue()           PORTBbits.RB3
#define LED_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set Button1 aliases
#define Button1_TRIS                 TRISBbits.TRISB4
#define Button1_LAT                  LATBbits.LATB4
#define Button1_PORT                 PORTBbits.RB4
#define Button1_WPU                  WPUBbits.WPUB4
#define Button1_OD                   ODCONBbits.ODCB4
#define Button1_ANS                  ANSELBbits.ANSB4
#define Button1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Button1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Button1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Button1_GetValue()           PORTBbits.RB4
#define Button1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Button1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Button1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Button1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Button1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define Button1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define Button1_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Button1_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Button2 aliases
#define Button2_TRIS                 TRISBbits.TRISB5
#define Button2_LAT                  LATBbits.LATB5
#define Button2_PORT                 PORTBbits.RB5
#define Button2_WPU                  WPUBbits.WPUB5
#define Button2_OD                   ODCONBbits.ODCB5
#define Button2_ANS                  ANSELBbits.ANSB5
#define Button2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Button2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Button2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Button2_GetValue()           PORTBbits.RB5
#define Button2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Button2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Button2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Button2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Button2_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define Button2_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define Button2_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Button2_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set R1_Key aliases
#define R1_Key_TRIS                 TRISCbits.TRISC0
#define R1_Key_LAT                  LATCbits.LATC0
#define R1_Key_PORT                 PORTCbits.RC0
#define R1_Key_WPU                  WPUCbits.WPUC0
#define R1_Key_OD                   ODCONCbits.ODCC0
#define R1_Key_ANS                  ANSELCbits.ANSC0
#define R1_Key_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define R1_Key_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define R1_Key_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define R1_Key_GetValue()           PORTCbits.RC0
#define R1_Key_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define R1_Key_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define R1_Key_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define R1_Key_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define R1_Key_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define R1_Key_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define R1_Key_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define R1_Key_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set R2_Key aliases
#define R2_Key_TRIS                 TRISCbits.TRISC1
#define R2_Key_LAT                  LATCbits.LATC1
#define R2_Key_PORT                 PORTCbits.RC1
#define R2_Key_WPU                  WPUCbits.WPUC1
#define R2_Key_OD                   ODCONCbits.ODCC1
#define R2_Key_ANS                  ANSELCbits.ANSC1
#define R2_Key_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define R2_Key_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define R2_Key_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define R2_Key_GetValue()           PORTCbits.RC1
#define R2_Key_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define R2_Key_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define R2_Key_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define R2_Key_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define R2_Key_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define R2_Key_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define R2_Key_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define R2_Key_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set R3_Key aliases
#define R3_Key_TRIS                 TRISCbits.TRISC2
#define R3_Key_LAT                  LATCbits.LATC2
#define R3_Key_PORT                 PORTCbits.RC2
#define R3_Key_WPU                  WPUCbits.WPUC2
#define R3_Key_OD                   ODCONCbits.ODCC2
#define R3_Key_ANS                  ANSELCbits.ANSC2
#define R3_Key_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define R3_Key_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define R3_Key_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define R3_Key_GetValue()           PORTCbits.RC2
#define R3_Key_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define R3_Key_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define R3_Key_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define R3_Key_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define R3_Key_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define R3_Key_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define R3_Key_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define R3_Key_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set R4_Key aliases
#define R4_Key_TRIS                 TRISCbits.TRISC3
#define R4_Key_LAT                  LATCbits.LATC3
#define R4_Key_PORT                 PORTCbits.RC3
#define R4_Key_WPU                  WPUCbits.WPUC3
#define R4_Key_OD                   ODCONCbits.ODCC3
#define R4_Key_ANS                  ANSELCbits.ANSC3
#define R4_Key_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define R4_Key_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define R4_Key_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define R4_Key_GetValue()           PORTCbits.RC3
#define R4_Key_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define R4_Key_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define R4_Key_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define R4_Key_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define R4_Key_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define R4_Key_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define R4_Key_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define R4_Key_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set C1_Key aliases
#define C1_Key_TRIS                 TRISCbits.TRISC4
#define C1_Key_LAT                  LATCbits.LATC4
#define C1_Key_PORT                 PORTCbits.RC4
#define C1_Key_WPU                  WPUCbits.WPUC4
#define C1_Key_OD                   ODCONCbits.ODCC4
#define C1_Key_ANS                  ANSELCbits.ANSC4
#define C1_Key_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define C1_Key_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define C1_Key_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define C1_Key_GetValue()           PORTCbits.RC4
#define C1_Key_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define C1_Key_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define C1_Key_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define C1_Key_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define C1_Key_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define C1_Key_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define C1_Key_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define C1_Key_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set C2_Key aliases
#define C2_Key_TRIS                 TRISCbits.TRISC5
#define C2_Key_LAT                  LATCbits.LATC5
#define C2_Key_PORT                 PORTCbits.RC5
#define C2_Key_WPU                  WPUCbits.WPUC5
#define C2_Key_OD                   ODCONCbits.ODCC5
#define C2_Key_ANS                  ANSELCbits.ANSC5
#define C2_Key_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define C2_Key_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define C2_Key_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define C2_Key_GetValue()           PORTCbits.RC5
#define C2_Key_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define C2_Key_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define C2_Key_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define C2_Key_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define C2_Key_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define C2_Key_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define C2_Key_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define C2_Key_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set C3_Key aliases
#define C3_Key_TRIS                 TRISCbits.TRISC6
#define C3_Key_LAT                  LATCbits.LATC6
#define C3_Key_PORT                 PORTCbits.RC6
#define C3_Key_WPU                  WPUCbits.WPUC6
#define C3_Key_OD                   ODCONCbits.ODCC6
#define C3_Key_ANS                  ANSELCbits.ANSC6
#define C3_Key_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define C3_Key_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define C3_Key_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define C3_Key_GetValue()           PORTCbits.RC6
#define C3_Key_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define C3_Key_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define C3_Key_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define C3_Key_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define C3_Key_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define C3_Key_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define C3_Key_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define C3_Key_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set C4_Key aliases
#define C4_Key_TRIS                 TRISCbits.TRISC7
#define C4_Key_LAT                  LATCbits.LATC7
#define C4_Key_PORT                 PORTCbits.RC7
#define C4_Key_WPU                  WPUCbits.WPUC7
#define C4_Key_OD                   ODCONCbits.ODCC7
#define C4_Key_ANS                  ANSELCbits.ANSC7
#define C4_Key_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define C4_Key_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define C4_Key_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define C4_Key_GetValue()           PORTCbits.RC7
#define C4_Key_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define C4_Key_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define C4_Key_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define C4_Key_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define C4_Key_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define C4_Key_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define C4_Key_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define C4_Key_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set DB0_LCD aliases
#define DB0_LCD_TRIS                 TRISDbits.TRISD0
#define DB0_LCD_LAT                  LATDbits.LATD0
#define DB0_LCD_PORT                 PORTDbits.RD0
#define DB0_LCD_WPU                  WPUDbits.WPUD0
#define DB0_LCD_OD                   ODCONDbits.ODCD0
#define DB0_LCD_ANS                  ANSELDbits.ANSD0
#define DB0_LCD_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define DB0_LCD_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define DB0_LCD_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define DB0_LCD_GetValue()           PORTDbits.RD0
#define DB0_LCD_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define DB0_LCD_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define DB0_LCD_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define DB0_LCD_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define DB0_LCD_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define DB0_LCD_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define DB0_LCD_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define DB0_LCD_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set DB1_LCD aliases
#define DB1_LCD_TRIS                 TRISDbits.TRISD1
#define DB1_LCD_LAT                  LATDbits.LATD1
#define DB1_LCD_PORT                 PORTDbits.RD1
#define DB1_LCD_WPU                  WPUDbits.WPUD1
#define DB1_LCD_OD                   ODCONDbits.ODCD1
#define DB1_LCD_ANS                  ANSELDbits.ANSD1
#define DB1_LCD_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define DB1_LCD_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define DB1_LCD_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define DB1_LCD_GetValue()           PORTDbits.RD1
#define DB1_LCD_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define DB1_LCD_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define DB1_LCD_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define DB1_LCD_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define DB1_LCD_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define DB1_LCD_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define DB1_LCD_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define DB1_LCD_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set DB2_LCD aliases
#define DB2_LCD_TRIS                 TRISDbits.TRISD2
#define DB2_LCD_LAT                  LATDbits.LATD2
#define DB2_LCD_PORT                 PORTDbits.RD2
#define DB2_LCD_WPU                  WPUDbits.WPUD2
#define DB2_LCD_OD                   ODCONDbits.ODCD2
#define DB2_LCD_ANS                  ANSELDbits.ANSD2
#define DB2_LCD_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define DB2_LCD_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define DB2_LCD_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define DB2_LCD_GetValue()           PORTDbits.RD2
#define DB2_LCD_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define DB2_LCD_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define DB2_LCD_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define DB2_LCD_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define DB2_LCD_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define DB2_LCD_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define DB2_LCD_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define DB2_LCD_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set DB3_LCD aliases
#define DB3_LCD_TRIS                 TRISDbits.TRISD3
#define DB3_LCD_LAT                  LATDbits.LATD3
#define DB3_LCD_PORT                 PORTDbits.RD3
#define DB3_LCD_WPU                  WPUDbits.WPUD3
#define DB3_LCD_OD                   ODCONDbits.ODCD3
#define DB3_LCD_ANS                  ANSELDbits.ANSD3
#define DB3_LCD_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define DB3_LCD_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define DB3_LCD_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define DB3_LCD_GetValue()           PORTDbits.RD3
#define DB3_LCD_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define DB3_LCD_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define DB3_LCD_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define DB3_LCD_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define DB3_LCD_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define DB3_LCD_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define DB3_LCD_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define DB3_LCD_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set DB4_LCD aliases
#define DB4_LCD_TRIS                 TRISDbits.TRISD4
#define DB4_LCD_LAT                  LATDbits.LATD4
#define DB4_LCD_PORT                 PORTDbits.RD4
#define DB4_LCD_WPU                  WPUDbits.WPUD4
#define DB4_LCD_OD                   ODCONDbits.ODCD4
#define DB4_LCD_ANS                  ANSELDbits.ANSD4
#define DB4_LCD_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define DB4_LCD_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define DB4_LCD_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define DB4_LCD_GetValue()           PORTDbits.RD4
#define DB4_LCD_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define DB4_LCD_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define DB4_LCD_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define DB4_LCD_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define DB4_LCD_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define DB4_LCD_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define DB4_LCD_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define DB4_LCD_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set DB5_LCD aliases
#define DB5_LCD_TRIS                 TRISDbits.TRISD5
#define DB5_LCD_LAT                  LATDbits.LATD5
#define DB5_LCD_PORT                 PORTDbits.RD5
#define DB5_LCD_WPU                  WPUDbits.WPUD5
#define DB5_LCD_OD                   ODCONDbits.ODCD5
#define DB5_LCD_ANS                  ANSELDbits.ANSD5
#define DB5_LCD_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define DB5_LCD_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define DB5_LCD_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define DB5_LCD_GetValue()           PORTDbits.RD5
#define DB5_LCD_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define DB5_LCD_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define DB5_LCD_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define DB5_LCD_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define DB5_LCD_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define DB5_LCD_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define DB5_LCD_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define DB5_LCD_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set DB6_LCD aliases
#define DB6_LCD_TRIS                 TRISDbits.TRISD6
#define DB6_LCD_LAT                  LATDbits.LATD6
#define DB6_LCD_PORT                 PORTDbits.RD6
#define DB6_LCD_WPU                  WPUDbits.WPUD6
#define DB6_LCD_OD                   ODCONDbits.ODCD6
#define DB6_LCD_ANS                  ANSELDbits.ANSD6
#define DB6_LCD_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define DB6_LCD_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define DB6_LCD_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define DB6_LCD_GetValue()           PORTDbits.RD6
#define DB6_LCD_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define DB6_LCD_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define DB6_LCD_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define DB6_LCD_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define DB6_LCD_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define DB6_LCD_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define DB6_LCD_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define DB6_LCD_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set DB7_LCD aliases
#define DB7_LCD_TRIS                 TRISDbits.TRISD7
#define DB7_LCD_LAT                  LATDbits.LATD7
#define DB7_LCD_PORT                 PORTDbits.RD7
#define DB7_LCD_WPU                  WPUDbits.WPUD7
#define DB7_LCD_OD                   ODCONDbits.ODCD7
#define DB7_LCD_ANS                  ANSELDbits.ANSD7
#define DB7_LCD_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define DB7_LCD_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define DB7_LCD_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define DB7_LCD_GetValue()           PORTDbits.RD7
#define DB7_LCD_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define DB7_LCD_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define DB7_LCD_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define DB7_LCD_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define DB7_LCD_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define DB7_LCD_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define DB7_LCD_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define DB7_LCD_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set RS_LCD aliases
#define RS_LCD_TRIS                 TRISEbits.TRISE0
#define RS_LCD_LAT                  LATEbits.LATE0
#define RS_LCD_PORT                 PORTEbits.RE0
#define RS_LCD_WPU                  WPUEbits.WPUE0
#define RS_LCD_OD                   ODCONEbits.ODCE0
#define RS_LCD_ANS                  ANSELEbits.ANSE0
#define RS_LCD_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define RS_LCD_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define RS_LCD_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define RS_LCD_GetValue()           PORTEbits.RE0
#define RS_LCD_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define RS_LCD_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define RS_LCD_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define RS_LCD_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define RS_LCD_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define RS_LCD_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define RS_LCD_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define RS_LCD_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set EN_LCD aliases
#define EN_LCD_TRIS                 TRISEbits.TRISE1
#define EN_LCD_LAT                  LATEbits.LATE1
#define EN_LCD_PORT                 PORTEbits.RE1
#define EN_LCD_WPU                  WPUEbits.WPUE1
#define EN_LCD_OD                   ODCONEbits.ODCE1
#define EN_LCD_ANS                  ANSELEbits.ANSE1
#define EN_LCD_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define EN_LCD_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define EN_LCD_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define EN_LCD_GetValue()           PORTEbits.RE1
#define EN_LCD_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define EN_LCD_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define EN_LCD_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define EN_LCD_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define EN_LCD_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define EN_LCD_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define EN_LCD_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define EN_LCD_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF0 pin functionality
 * @Example
    IOCCF0_ISR();
 */
void IOCCF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_InterruptHandler);

*/
extern void (*IOCCF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_DefaultInterruptHandler);

*/
void IOCCF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF3 pin functionality
 * @Example
    IOCCF3_ISR();
 */
void IOCCF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_InterruptHandler);

*/
extern void (*IOCCF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);

*/
void IOCCF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/