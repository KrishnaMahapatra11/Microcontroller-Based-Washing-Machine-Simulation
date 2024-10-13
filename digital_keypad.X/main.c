/*
 * File:   main.c
 * Author: LENOVO
 *
 * Created on 30 March, 2024, 8:53 PM
 */


#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

#pragma config WDTE = OFF        

 void init_config(void) {
    LED_ARRAY1 = 0x00;
    LED_ARRAY1_DDR = 0x00;
    
    init_digital_keypad();
 }
void main(void) {
unsigned char key , mask = 0x55;
 init_config();
    while (1)
    {
       key = read_digital_keypad(STATE);   
       if (key == SW1)
       {
           LED_ARRAY1 = 0x55;
          for (unsigned int wait = 50000; wait--;);
           LED_ARRAY1 = 0xAA;
          for (unsigned int wait = 50000; wait--;);
       }
       if (key == SW2)
       {
           
           LED_ARRAY1 = 0x0F;
          for (unsigned int wait = 50000; wait--;);
           LED_ARRAY1 = 0xF0;
          for (unsigned int wait = 50000; wait--;);
       }
       if (key == SW3)
       {
           
           LED_ARRAY1 = 0xFF;
          for (unsigned int wait = 50000; wait--;);
           LED_ARRAY1 = 0x00;
          for (unsigned int wait = 50000; wait--;);
       }
    }
}