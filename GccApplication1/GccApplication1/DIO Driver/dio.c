/*
 * dio.c
 *
 * Created: 06-Oct-22 7:55:27 PM
 *  Author: George Welson
 */ 
#include "../registers.h"
#include "dio.h"
void CLEAR_BIT(uint8_t portNumber,uint8_t pinNumber){
	switch(portNumber){
		case 'A':{
			DDRA&=~(1<<pinNumber);
			break;
		}
	
		case 'B':{
			DDRB&=~(1<<pinNumber);
			break;
		}
		case 'C':{
			DDRC&=~(1<<pinNumber);
			break;
		}
		case 'D':{
			DDRD&=~(1<<pinNumber);
			break;
		}
}
void SET_BIT(uint8_t portNumber,uint8_t pinNumber){
	switch(portNumber){
		case 'A':{
		DDRA|=(1<<pinNumber);
		break;
	}
	
	case 'B':{
		DDRB|=(1<<pinNumber);
		break;
	}
	case 'C':{
		DDRC|=(1<<pinNumber);
		break;
	}
	case 'D':{
		DDRD|=(1<<pinNumber);
		break;
	}
}
void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction){
	switch(portNumber){
		case PORT_A:{
			if(direction==IN){
				CLEAR_BIT(portNumber,pinNumber);
			}
			else if(direction==OUT){
				SET_BIT(portNumber,pinNumber);
			}
			else{
				SET_BIT(portNumber,pinNumber);
			}
			break;
		}
		
		case PORT_B:{
			if(direction==IN){
				CLEAR_BIT(portNumber,pinNumber);
			}
			else if(direction==OUT){
				SET_BIT(portNumber,pinNumber);
			}
			else{
				SET_BIT(portNumber,pinNumber);
			}
			break;
		}
		
		case PORT_C:{
			if(direction==IN){
				CLEAR_BIT(portNumber,pinNumber);
			}
			else if(direction==OUT){
				SET_BIT(portNumber,pinNumber);
			}
			else{
				SET_BIT(portNumber,pinNumber);
			}
			break;
		}
		
		case PORT_D:{
			if(direction==IN){
				CLEAR_BIT(portNumber,pinNumber);
			}
			else if(direction==OUT){
				SET_BIT(portNumber,pinNumber);
			}
			else{
				SET_BIT(portNumber,pinNumber);
			}
			break;
		}	
		
	}
}
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value){
	switch(portNumber){
		case PORT_A:{
			if(value==LOW){
				PORTA&=~(1<<pinNumber);
			}
			else if(value==HIGH){
				PORTA|=(1<<pinNumber);
			}
			else{
				PORTA|=(1<<pinNumber);
			}
			break;
		}
		
		case PORT_B:{
			if(value==LOW){
				PORTB&=~(1<<pinNumber);
			}
			else if(value==HIGH){
				PORTB|=(1<<pinNumber);
			}
			else{
				PORTB|=(1<<pinNumber);
			}
			break;
		}
		
		case PORT_C:{
			if(value==LOW){
				PORTC&=~(1<<pinNumber);
			}
			else if(value==HIGH){
				PORTC|=(1<<pinNumber);
			}
			else{
				PORTC|=(1<<pinNumber);
			}
			break;
		}
		
		case PORT_D:{
			if(value==LOW){
				PORTD&=~(1<<pinNumber);
			}
			else if(value==HIGH){
				PORTD|=(1<<pinNumber);
			}
			else{
				PORTD|=(1<<pinNumber);
			}
			break;
		}	
		
	}
}
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber);
uint8_t DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value);