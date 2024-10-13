/*
 * File:   main.c
 * Author: LENOVO
 *
 * Created on 30 March, 2024, 9:54 PM
 */


#include <xc.h>
#pragma config WDTE = OFF  

void init_config(void) 
{
  TRISC1 = 0;  
}
void main(void) {
    init_config();

    while (1)
    {
     RC1 =1;
     for (unsigned int wait = 50000;  wait--;);
     RC1 =0;
     for(unsigned int wait = 50000;  wait--;);
    }
}