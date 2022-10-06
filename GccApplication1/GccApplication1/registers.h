/*
 * registers.h
 *
 * Created: 06-Oct-22 7:12:50 PM
 *  Author: George Welson
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//Direction Macros
#define IN 0
#define OUT 1
//Value Macros
#define LOW 0
#define HIGH 1
typedef unsigned char uint8_t;
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

#endif /* REGISTERS_H_ */