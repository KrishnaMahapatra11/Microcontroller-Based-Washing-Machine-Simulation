/*
 * File:   main.c
 * Author: LENOVO
 *
 * Created on 30 March, 2024, 6:02 PM
 */

#include <xc.h>
#pragma config WDTE = OFF        \

 void init_config(void) {
 /*config led port as output port  PORTD*/
    TRISD = 0x00;
    PORTD = 0x00;
    
    /*config RB0 pin as input pin*/
    TRISB0 = 1;
    
}

void main(void) 
{
    unsigned char once =1;
    init_config();
    while (1) {
        if(RB0 == 0 && once ) 
        {
            PORTD = ~PORTD;
            once = 0;
        }
        if(RB0 == 1) 
        {
            once = 1;
        }
}
}
