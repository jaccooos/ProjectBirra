/*
*  UsartSendFrameworkArduino.c
*
*  Copyright (c) 2009, 2010 by Avans Hogeschool.
* 
*  Date:    09-dec-2009
*			05-mrt-2015
			21-04-2018
*
*  Author:  J.C. Oostdijk
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>


///////////////////////////////////////////////////////////////////////////////
// USART init



void usart_Init(void)
{

	UBRR0L = 103;										// baudrade 9600
	UBRR0H = 0;
	UCSR0C = UCSR0C & ~(_BV(UMSEL01) | _BV(UMSEL00));

	UCSR0B = UCSR0B & ~(_BV(UCSZ02 ));
	UCSR0C = UCSR0C | (_BV(UCSZ01) | _BV(UCSZ00));    	// 8-bit character size

	UCSR0B = UCSR0B & ~(_BV(UPM01) | _BV(UPM00) | _BV(USBS0));     
	UCSR0B = UCSR0B | (_BV(RXEN0) | _BV(TXEN0));        // aanzetten van rx en tx



}


///////////////////////////////////////////////////////////////////////////////
// USART send


void usart_Send(unsigned char byteToSend)
{
	// voeg de gevraagde code toe
	
	UDR0 = 0x00;
	UDR0 = byteToSend;

}



