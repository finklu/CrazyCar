#include <msp430.h> 
#include "HAL/hal_general.h"
#include "HAL/hal_gpio.h"


/**
 * main.c
 */
#define LCD_BL_ON P8OUT |= LCD_BL
#define LCD_BL_OFF P8OUT &= ~LCD_BL

void multiply(void);

void main(void)
{
    HAL_Init();
    while(1)
    {
       multiply();

    }

}

void multiply(void)
{
    int a=10;
    int b=23;
    int c;

    float d=2.3435;
    float e=1.239;
    float f;

    LCD_BL_ON;
    c = a*b;
    LCD_BL_OFF;
    __delay_cycles(50);
    LCD_BL_ON;
    f= d*e;
    LCD_BL_OFF;
    __delay_cycles(500);

}



