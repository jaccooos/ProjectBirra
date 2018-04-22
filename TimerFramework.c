/*
*  TimerFramework.c
*
*  Copyright (c) 2009 by Avans Hogeschool.
* 
*  Date:    28-apr-2009
*  Author:  R. Smeets
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>

///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include "Timer.h"


// ***** Voeg hieronder in de gegeven volgorde de gevraagde functies in *****


///////////////////////////////////////////////////////////////////////////////
// timer0_SetCompareValue

void timer0_SetCompareValue(uint8_t count)
{
    OCR0A = count;
}

///////////////////////////////////////////////////////////////////////////////
// timer0_Init

void timer0_Init(void)
{
    
	TIMSK0 = 0x00;
	TCNT0  = 0;
	TCCR0B = 0x00;
	TCCR0A =_BV(1);
}

///////////////////////////////////////////////////////////////////////////////
// timer0_Start

void timer0_Start(void)
{
   	// hier word bit 1 op 1 gezet en de bits 0 en 2 op 0 van het TCCR0B register.
	// voor een periodetijd van 0,5 us
	
	TCCR0B = TCCR0B | _BV(1);						//bit 1
	TCCR0B = TCCR0B & ~(_BV(2) + 1); 			//bit 0 en 2
}


///////////////////////////////////////////////////////////////////////////////
// timer0_Wacht100us

void timer0_Wacht100us(void)
{	
	timer0_SetCompareValue(200);
	
	//set timer op 0
	timer0_Start();
	TCNT0 = 0x00;


	//wachten tot timer klaar is
	while(( TIFR0 & _BV(1))== 0)
	{
		
	}
 
 	//flag reset
 	TIFR0=(TIFR0 | _BV(1));
}

///////////////////////////////////////////////////////////////////////////////
// timer0_WachtN100us

void timer0_WachtN100us(int aantal)
{
	while (aantal > 0)
	{
		timer0_Wacht100us();
		aantal= aantal-1;
	}
}





