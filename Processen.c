/*
*  Processen.c
*
* 
*  Date:    28-04-2018
*
*  Author:  
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <stdbool.h>
#include <avr/interrupt.h>


///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include "Mainheader.h"
#include "Serial.h"
#include "Timer.h"
#include "Testrun.h"
#include "Stepper.h"

///////////////////////////////////////////////////////////////////////////////
// file globals






///////////////////////////////////////////////////////////////////////////////
// LaatBekerVallen

bool LaatBekerVallen(void)
{

}

///////////////////////////////////////////////////////////////////////////////
// TapBiertje

bool TapBiertje (void)
{

}

///////////////////////////////////////////////////////////////////////////////
// DraaiTafel

bool DraaiTafel(void)
{

}

///////////////////////////////////////////////////////////////////////////////
// OpenDeur



bool OpenDeur(void)					//Er moeten nog goede waardes ingevuld worden
{
	bool CarocelOpPositie 	= false;
	bool DispenserOpPositie = false;

	while (true)
	{
		if(CarocelOpPositie == true)														// Voorwaarde
		{ 
			if(DispenserOpPositie = true);													// Voorwaarde
			{	
				Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen);		// Deur gaat open Pinnen nog goed zette
				while(DispenserOpPositie = true) 											// Wachten tot de beker er uit is gehaald
				{
												
				}
				
				timer0_WachtN100us(int aantal)												// Tijd instellen
				Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen);
					
			}
			else(DispenserOpPositie = false);												// Geen beker in de bekerhouder, dus deur dichtlaten
			{
				DeurDichtlaten();
			}
			
		}
		else (CarocelOpPositie == false)													// Carocel is niet goed op positie, proces ligt stil
		{
			ErrorDeuropenen(); 	
		}
	}
	return 0;
}





