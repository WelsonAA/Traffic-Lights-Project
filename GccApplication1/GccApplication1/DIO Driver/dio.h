/*
 * dio.h
 *
 * Created: 06-Oct-22 7:55:44 PM
 *  Author: George Welson
 */ 


#ifndef DIO_H_
#define DIO_H_
void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction);
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value);
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber);
uint8_t DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value);




#endif /* DIO_H_ */