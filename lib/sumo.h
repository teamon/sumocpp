#ifndef SUMO_H_
#define SUMO_H_

/**
 * Opis wyprowadzeń procesora
 * 
 * PORTA
 * 		0 - DIST1 - czujnik odległości
 * 		1 - DIST2 - czujnik odległości
 * 		2 - DIST3 - czujnik odległości
 * 		3 - DIST4 - czujnik odległości
 * 		4 - DIST5 - czujnik odległości
 * 		5 - DIST6 - czujnik odległości
 * 		6 - SERVO1 - wejście serwomechanizmu
 * 		7 - SERVO2 - wejście serwomechanizmu
 * 
 * PORTB
 * 		0 - GROUND1 - czujnik podłoża
 * 		1 - GROUND2 - czujnik podłoża
 * 		2 - GROUND3 - czujnik podłoża
 * 		3 - GROUND4 - czujnik podłoża
 * 		4 - LEDS - dioda świecąca
 * 		5 - MOSI - używany do programowania
 * 		6 - MISO - używany do programowania
 * 		7 - SCK - używany do programowania
 * 
 * PORTC
 * 		0 - LED1 - dioda świecąca
 * 		1 - LED2 - dioda świecąca
 * 		2 - LED3 - dioda świecąca
 * 		3 - LED4 - dioda świecąca
 * 		4 - LED5 - dioda świecąca
 * 		5 - LED6 - dioda świecąca
 * 		6 - LED7/SERVO4 - dioda świecąca/wejście serwomechanizmu
 * 		7 - LED8/SERVO3 - dioda świecąca/wejście serwomechanizmu
 * 
 * PORTD
 * 		0 - RXD - RS232
 * 		1 - TXD - RS232
 * 		2 - SWITCH1 - przycisk
 * 		3 - SWITCH2 - przycisk
 * 		4 - M1_PWM - start/stop silnika
 * 		5 - M2_PWM - start/stop silnika
 * 		6 - M1_DIR - kierunek obrotów silnika
 * 		7 - M2_DIR - kierunek obrotów silnika
 * 
 */


/**
 * Częstotliwość kwarcu
 */
#define F_CPU 7372800L

/**
 * Prędkość transmisji po RSie
 */
#define USART_SPEED 9600L


/**
 * Port wyjścia PWM silnika 1
 */
#define MOTOR1_PWM_PORT PORTD

/**
 * Rejestr kierunku portu wyjścia PWM silnika 1
 */
#define MOTOR1_PWM_DDR DDRD

/**
 * Linia portu wyjścia PWM silnika 1
 */
#define MOTOR1_PWM_PIN 4

/** 
 * Negacja stanu aktywnego silnika 1
 * 0 - brak negacji
 * 1 - negacja
 */
#define MOTOR1_PWM_NEGATE 1

/**
 * Opóźnienie pomiędzy przełączaniem kierunków ruchu silnika 1
 * podawane w ms
 * Uwaga: musi być większe od 0
 */
#define MOTOR1_DELAY 2

/**
 * Maksymalna moc silnika 1 wyrażona w % 
 */
#define MOTOR1_MAX_POWER 70

/**
 * Domyślna moc silnika 1 wyrażona w % 
 */
#define MOTOR1_DEFAULT_POWER 30

/**
 * Port wyjścia kierunku silnika 1
 */
#define MOTOR1_DIR_PORT PORTD

/**
 * Rejestr kierunku portu wyjścia kierunku silnika 1
 */
#define MOTOR1_DIR_DDR DDRD

/**
 * Linia portu wyjścia kierunku silnika 1
 */
#define MOTOR1_DIR_PIN 7

/** 
 * Negacja kierunku ruchu silnika 1
 * 0 - brak negacji
 * 1 - negacja
 */
#define MOTOR1_DIR_NEGATE 0



/**
 * Port wyjścia PWM silnika 2
 */
#define MOTOR2_PWM_PORT PORTD

/**
 * Rejestr kierunku portu wyjścia PWM silnika 2
 */
#define MOTOR2_PWM_DDR DDRD

/**
 * Linia portu wyjścia PWM silnika 2
 * (musi być wyjście kanału PWM)
 */
#define MOTOR2_PWM_PIN 5

/** 
 * Negacja stanu aktywnego silnika 2
 * 0 - brak negacji
 * 1 - negacja
 */
#define MOTOR2_PWM_NEGATE 1

/**
 * Opóźnienie pomiędzy przełączaniem kierunków ruchu silnika 2
 * podawane w ms
 * Uwaga: musi być większe od 0
 */
#define MOTOR2_DELAY 2

/**
 * Maksymalna moc silnika 2 wyrażona w % 
 */
#define MOTOR2_MAX_POWER 70

/**
 * Domyślna moc silnika 2 wyrażona w % 
 */
#define MOTOR2_DEFAULT_POWER 30

/**
 * Port wyjścia kierunku silnika 2
 */
#define MOTOR2_DIR_PORT PORTD

/**
 * Rejestr kierunku portu wyjścia kierunku silnika 2
 */
#define MOTOR2_DIR_DDR DDRD

/**
 * Linia portu wyjścia kierunku silnika 2
 */
#define MOTOR2_DIR_PIN 6

/** 
 * Negacja kierunku ruchu silnika 2
 * 0 - brak negacji
 * 1 - negacja
 */
#define MOTOR2_DIR_NEGATE 0



/**
 * Port serwomechanozmu 1
 */
#define SERVO1_PORT PORTA

/**
 * Rejestr kierunku portu serwomechanozmu 1
 */
#define SERVO1_DDR DDRA

/**
 * Linia portu serwomechanozmu 1
 */
#define SERVO1_PIN 6

/** 
 * Negacja kierunku ruchu serwomechanizmu 1
 * 0 - brak negacji
 * 1 - negacja
 */
#define SERVO1_DIR_NEGATE 0


/**
 * Port serwomechanozmu 2
 */
#define SERVO2_PORT PORTA

/**
 * Rejestr kierunku portu serwomechanozmu 2
 */
#define SERVO2_DDR DDRA

/**
 * Linia portu serwomechanozmu 1
 */
#define SERVO2_PIN 7

/** 
 * Negacja kierunku ruchu serwomechanizmu 2
 * 0 - brak negacji
 * 1 - negacja
 */
#define SERVO2_DIR_NEGATE 0


/**
 * Port serwomechanozmu 3
 */
#define SERVO3_PORT PORTC

/**
 * Rejestr kierunku portu serwomechanozmu 3
 */
#define SERVO3_DDR DDRC

/**
 * Linia portu serwomechanozmu 3
 */
#define SERVO3_PIN 6

/** 
 * Negacja kierunku ruchu serwomechanizmu 3
 * 0 - brak negacji
 * 1 - negacja
 */
#define SERVO3_DIR_NEGATE 0


/**
 * Port serwomechanozmu 4
 */
#define SERVO4_PORT PORTC

/**
 * Rejestr kierunku portu serwomechanozmu 4
 */
#define SERVO4_DDR DDRC

/**
 * Linia portu serwomechanozmu 4
 */
#define SERVO4_PIN 7

/** 
 * Negacja kierunku ruchu serwomechanizmu 4
 * 0 - brak negacji
 * 1 - negacja
 */
#define SERVO4_DIR_NEGATE 0


/**
 * Port czujników odległości
 * (musi być port z wejściami analogowymi)
 */
#define DIST_POTR PORTA

/**
 * Rejestr kierunku portu czujników odległości
 */
#define DIST_DDR DDRA

/**
 * Linie czujników odległości
 */
#define DIST1_PIN 0
#define DIST2_PIN 1
#define DIST3_PIN 2
#define DIST4_PIN 3
#define DIST5_PIN 4
#define DIST6_PIN 5



/**
 * Port czujników podłoża
 * (musi być port z wejściami analogowymi)
 */
#define GROUND_PORT PORTB

/**
 * Rejestr kierunku portu czujników podłaża
 */
#define GROUND_DDR DDRB

/**
 * Rejestr wejściowy portu czujników podłaża
 */
#define GROUND_PINPORT PINB

/**
 * Linie czujników podłoża
 */
#define GROUND1_PIN 0
#define GROUND2_PIN 1
#define GROUND3_PIN 2
#define GROUND4_PIN 3

/**
 * Negacja wartości zwracanej przez funkcje wykrywające podloże
 * 0 - brak negacji
 * 1 - negacja
 */
#define GROUND_NEGATE 0



/**
 * Port przycisku 1
 */
#define SWITCH1_PORT PORTD

/**
 * Rejestr kierunku portu przycisku 1
 */
#define SWITCH1_DDR PORTD

/**
 * Rejestr wejściowy portu przycisku 1
 */
#define SWITCH1_PINPORT PIND

/**
 * linia portu przycisku 1
 */
#define SWITCH1_PIN 2

/**
 * Port przycisku 2
 */
#define SWITCH2_PORT PORTD

/**
 * Rejestr kierunku portu przycisku 2
 */
#define SWITCH2_DDR PORTD

/**
 * Rejestr wejściowy portu przycisku 2
 */
#define SWITCH2_PINPORT PIND

/**
 * linia portu przycisku 2
 */
#define SWITCH2_PIN 3


/**
 * Port specjalnej diody LED
 */
#define LEDS_PORT PORTB

/**
 * Rejestr kierunku portu specjalnej diody LED
 */
#define LEDS_DDR DDRB

/**
 * Linia diody specjalnej
 */
#define LEDS_PIN 4



/**
 * Port diagnostycznych diod LED
 */
#define LED_PORT PORTC

/**
 * Rejestr kierunku portu diagnostycznych diod LED
 */
#define LED_DDR DDRC

/**
 * Linie poszczególnych diod
 */
#define LED1_PIN 0
#define LED2_PIN 1
#define LED3_PIN 2
#define LED4_PIN 3
#define LED5_PIN 4
#define LED6_PIN 5
#define LED7_PIN 6
#define LED8_PIN 7

#define DEBUG 1


#include "macro.h"

#include <avr/io.h>
#include <avr/iom32.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/eeprom.h>
#include <util/delay.h>
#include <ctype.h>

// lib/led.cpp
void led_init();
void led_send(unsigned char value);


#endif