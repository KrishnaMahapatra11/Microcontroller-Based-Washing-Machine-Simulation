/*
 * File:   main.c
 * Author: LENOVO
 *
 * Created on 30 March, 2024, 1:21 PM
 */



#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
void init_config(void)
{
	// SET PORTB as Output port
	LED_ARRAY2_DDR = 0x00;	
}
void main()
{
	 
	init_config();
	
	while(1)
	{
		// Turning ON LEDS
		LED_ARRAY2  = 0xFF; // 0000 0001
        
		for (unsigned  int wait = 50000; wait--;);
		
		// Turning OFF LEDS 
		LED_ARRAY2  = 0x00; // 1111 0000
		
		// Delay
		for (unsigned  int wait = 50000; wait--;);
	}
}





