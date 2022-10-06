/*
 * GccApplication1.c
 *
 * Created: 29-Aug-22 8:35:38 PM
 * Author : George Welson
 */ 

#include "registers.h"
#include "DIO Driver/dio.h"
//#include <avr/io.h>
#define F_CPU 1000000U //1MHz
// delay unit is ms
#include <util/delay.h>

int main(void){
	DIO_init(PORT_A,4,OUT);
	while(1){
		DIO_write(PORT_A,4,HIGH);
	}
}

