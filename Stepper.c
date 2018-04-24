
/*
*  
*  MAIN.c
* 
*  Date:    21-apr-2018
*  Author:  J.C. Oostdijk
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include "Timer.h"
#include "Stepper.h"

///////////////////////////////////////////////////////////////////////////////
// Stepper116

void Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen)
{	
if(DIR = Linksom)
	{
												// richting dingetje nog toevoegen
		PORTD | _BV(MotorNummer);				//Nog aanpassen!!!
	
		timer0_WachtN100us(100);

		PORTD & ~(_BV(MotorNummer));			//Nog aanpassen!!!
	
		timer0_WachtN100us(100);

		AantalStappen = (AantalStappen -1);
	}
	if(DIR = Rechtsom)
	{
												//richting dingetje nog toevoegen
		PORTD | _BV(MotorNummer);				//Nog aanpassen!!!
	
		timer0_WachtN100us(100);

		PORTD & ~(_BV(MotorNummer));			//Nog aanpassen!!!
	
		timer0_WachtN100us(100);

		AantalStappen = (AantalStappen -1);
	}
}
