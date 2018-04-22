/*
*  UsartReceiveInterruptFrameworkArd.c
*
* 
*  Date:    09-dec-2009
*			09-mrt-2015
*  			21-04-2018
*
*  Author:  J.C. Oostdijk
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>

///////////////////////////////////////////////////////////////////////////////
// file globals

volatile static uint8_t	cmd = 0;	// laatst ontvangen commando
unsigned char Letter = 'a';

///////////////////////////////////////////////////////////////////////////////
// send a byte

void UartSendByte(uint8_t byteToSend)
{ 

    UDR0 = byteToSend;
}




///////////////////////////////////////////////////////////////////////////////
// enable USART receiver interrupts

void usart_EnableReceiveInterrupts(void)
{
	UCSR0B = UCSR0B | (_BV(RXCIE0));
	
}



///////////////////////////////////////////////////////////////////////////////
// global interrupt enable

void EnableInterrupts(void)
{

	sei(); 
	
}

///////////////////////////////////////////////////////////////////////////////
// USART init
void usart_Init(void)
{
	
	UBRR0L = 103;									//Baudrade 9600
	UBRR0H = 0;
	UCSR0C = UCSR0C & ~(_BV(UMSEL01) | _BV(UMSEL00));

	UCSR0B = UCSR0B & ~(_BV(UCSZ02 ));
	UCSR0C = UCSR0C | (_BV(UCSZ01) | _BV(UCSZ00));  // 8-bit character size

	UCSR0B = UCSR0B & ~(_BV(UPM01) | _BV(UPM00) | _BV(USBS0));     
	UCSR0B = UCSR0B | (_BV(RXEN0) | _BV(TXEN0));    // aanzetten van rx en tx



}



/////////////////////////////////////////////////////////////////////////////
/// Usart_Sent

void usart_Send(unsigned char byteToSend)
{
	// voeg de gevraagde code toe
	
	UDR0 = 0x00;
	UDR0 = byteToSend;

}



//////////////////////////////////////////////////////////////////////////////
// Initialisatie via aparte functie

void InitializeSerial(void)
{

	// voeg code toe: initialiseer de UART
		usart_Init();

	// voeg code toe: enable de receiver interrupts
		usart_EnableReceiveInterrupts();

	// voeg code toe: enable de systeem interrupts
		EnableInterrupts();	

}
