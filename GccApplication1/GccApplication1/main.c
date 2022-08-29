/*
 * GccApplication1.c
 *
 * Created: 29-Aug-22 8:35:38 PM
 * Author : George Welson
 */ 

#include <avr/io.h>
#define F_CPU 1000000U
#include <util/delay.h>

int main(void){
	DDRB |=(1<<3);
	while(1){
		PORTB ^= (1<<3);
		_delay_ms(2000);
	}
}

