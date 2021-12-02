#ifndef _HEADER1_H_
#define _HEADER1_H_
#include <avr/io.h>


#define SET_SERVO_AS_OUTPUT DDRB |=(1<<PB0)
#define SET_CLOCK_AS_INPUT DDRD &=(1<<PD0)
#define SET_HEATER_AS_INPUT DDRD &=(1<<PD4)
#define PULL_UP_CLOCK PORTD |=(1<<PD0)
#define PULL_UP_HEATER PORTD |=(1<<PD4)
#define CLOCK_ON !(PIND &(1<<PD0))
#define HEATER_ON !(PIND &(1<<PD4))
#define SERVO_ON PORTB |=(1<<PB0)
#define SERVO_OFF PORTB &=~(1<<PB0)

void peripheral_init();

#endif
