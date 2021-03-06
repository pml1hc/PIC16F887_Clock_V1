/* 
 * File:   74hc595.h
 * Author: Liam
 *
 * Created on June 23, 2017, 10:18 AM
 */

#ifndef IC74HC595_H
#define	IC74HC595_H


#include "pic16f887.h"
#include <htc.h>


// *****************************************************************************

#define DATA_595 PORTCbits.RC5
#define SCK_595  PORTCbits.RC6
#define SCL_595  PORTCbits.RC7

#define LED1 PORTDbits.RD0
#define LED2 PORTDbits.RD1

// *****************************************************************************

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

// *****************************************************************************
void vSendData595(unsigned char x);
unsigned char Binary2BCD(unsigned char a);
// *****************************************************************************

#endif	/* 74HC595_H */

