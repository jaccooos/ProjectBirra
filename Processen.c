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



bool OpenDeur(void)									//De pinnen moeten nog goed gezet worden
{
	bool CarocelOpPositie 	= false;
	bool DispenserOpPositie = false;

	while (true)
	{
		if(CarocelOpPositie == true)				// Voorwaarde
		{ 
			if(DispenserOpPositie = true);			// Voorwaarde
			{					
				while(DispenserOpPositie = true) 	// Wachten tot de beker er uit is gehaald
				{
					Deuropenen()					//Deur gaat open Pinnen nog goed zetten			
				}
				
				Delay();
				Deurdichten();
					
			}
			else(DispenserOpPositie = false);		// Geen beker in de bekerhouder, dus deur dichtlaten
			{
				DeurDichtlaten();
			}
			
		}
		else (CarocelOpPositie == false)			// carocel is niet goed op positie, proces ligt stil
		{
			ErrorDeuropenen(); 	
		}
	}

}

///////////////////////////////////////////////////////////////////////////////
// DichtDeur

bool DichtDeur(void)
{

}



