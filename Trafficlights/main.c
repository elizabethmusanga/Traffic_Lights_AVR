/*
 * Trafficlights.c
 *
 * Created: 5/26/2021 3:19:01 PM
 * Author : eliza
 */ 

#define F_CPU 8000000UL // Defining the clock speed for the uC
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Setting all pins in PORTC to output pins*/
	DDRC = 0xFF;
	
    while (1) 
    {
		PORTC = 0x02;  //pin 1 set to high for 100ms
		_delay_ms(100);
		PORTC = 0x12;  //both pin 1&4 set to high for 100ms
		_delay_ms(100);
		PORTC = 0x10;  //pin 4 set to high for 100ms
		_delay_ms(100);
		PORTC = 0x80;  //pin 7 set to high for 200ms
		_delay_ms(200);
    }
	return 0;
}

