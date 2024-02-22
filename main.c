/*
 * Gccpaulet.c
 *
 * Created: 09/08/2022 15:13:51
 * Author : wizdo
 */ 

#include <stdio.h>
#define F_CPU 16000000L

#include <util/delay.h>


int main(void)
{
    DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;
	DDRD = 0xff;
	DDRE = 0xff;
	DDRF = 0xff;

	
    while (1) 
    {
		PORTA = 0xff;
		PORTB = 0x00;
		PORTC = 0x00;
		PORTD = 0x00;
		PORTE = 0x00;
		PORTF = 0x00;
		_delay_ms(5);
		PORTA = 0x00;
		PORTB = 0xff;
		PORTC = 0x00;
		PORTD = 0x00;
		PORTE = 0x00;
		PORTF = 0x00;
		_delay_ms(5);
		PORTA = 0x00;
		PORTB = 0x00;
		PORTC = 0xff;
		PORTD = 0x00;
		PORTE = 0x00;
		PORTF = 0x00;
		_delay_ms(5);
		PORTA = 0x00;
		PORTB = 0x00;
		PORTC = 0x00;
		PORTD = 0xff;
		PORTE = 0x00;
		PORTF = 0x00;
		_delay_ms(5);
		
		PORTA = 0x00;
		PORTB = 0x00;
		PORTC = 0x00;
		PORTD = 0x00;
		PORTE = 0xff;
		PORTF = 0x00;
		_delay_ms(5);
		
		PORTA = 0x00;
		PORTB = 0x00;
		PORTC = 0x00;
		PORTD = 0x00;
		PORTE = 0x00;
		PORTF = 0xff;
		_delay_ms(5);
    }
}

