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
	

	if (( PORTG & _BV(WR)) == _BV(WR))		// check positie draaischijf, pin 41, PL6 (Verbetering, Pin 41 is PORTG (WR)
	{
		if ((GetDistance()) < 200)			// check beker vooraad of er nog genoeg bekers zijn
		{
			Stepper116(DispenserMotor, linksom, 500); //bekerdispenser naar buiten
			timer0_WachtN100us(1000);
			Stepper116(DispenserMotor, rechtsom, 500); //bekerdispenser naar binnen
			timer0_WachtN100us(1000);
			return false;
		}
		else
		{
			return true;
		{
	}
	
}
///////////////////////////////////////////////////////////////////////////////
// WaterklepenEnFlowmeter
	
Bool WaterklepenEnFlowmeter(uint8_t AantalML)

{
	uint8_t Flowmeter = PORTA (AD7)
	uint8_t Waterklep = PORTH (OC4C) // Waterklep zit op PORTH pin 5(OC4C)
	while (TapAan)   //Tap moet aan zijn en de beker mag niet vol zitten
	{
		Waterklep = 1;                // openzetten van de waterklep (Puls geven voor openzetten)
		{
			if (Flowmeter 300ml)  // Beker zit vol bij 300 ml
                                {
                                   	Waterklep = 0;  // Waterklep gaat weer dicht
                                    	Tappenklaar = true;  // Aangeven dat de Tap klaar is
                                }
		}
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////
// TapBiertje


bool TapBiertje (void)
{
    	bool BekerAanwezig    = false;
    	bool TappenKlaar      = false;
    	bool Bekerdoorgeven   = false;
    	uint8_t AantalML	  = 300;
	uint8_t Flowmeter = PORTA (AD7)  // 134 pulsen moet de flowmeter tellen, flowmeter zit op pin AD7
	uint8_t Waterklep = PORTH (OC4C) // Waterklep zit op PORTH pin 5(OC4C)

   	if ((PORTA & _BV(AD1)) == _BV(AD1))         // wachten tot beker aanwezig is
        {
		WaterklepenEnFlowmeter(AantalML);    //waterklep en flowmeter aanroepen 
			{
			else (Bekerdoorgeven == true)    //wachten tot dat beker doorgegeven is
			timer0_WachtN100us(1000);
                    	}
		else (BekerAanwezig == false)  // Geen beker aanwezig dus er mag niet getapt worden
        	{
            		Error = true;
		}
        }
	return 0;
}
                 
     

///////////////////////////////////////////////////////////////////////////////
// DraaiTafel

bool DraaiTafel(void)
{
	bool Tafeldraaien
	bool TafelOpPositie
	bool DraaiTafelDraaien
	bool DraaiTafelOpPositie
	bool DeurDicht
	

	while (true) 
	{
		if(DraaiTafelOpPositie == true)
		{
			if(DeurDicht == true)
				{
					if(DraaiTafelDraaien == true)
					{	
						Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen);		// Draaitafel draaien, Pinnen nog goed zette
						while() 																	// Wachten of reedcontact maken/verbreken
						{
												
						}
					}
					else(DraaiTafelDraaien == false)
					{
						timer0_WachtN100us(1000);																		// Niks doen
					}								
				}	
			else(DeurDicht == false)
			{
				Error = true;																		// Deur Staat Open Error
			}					
		}	
		else(DraaiTafelOpPositie == false)
		{
			Error= true;																					// Draaitafel niet op goede positie Error
		}							
	}
	return 0;
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
				Stepper116(uint8_t 4, uint8_t linksom, uint16_t AantalStappen);		// Deur gaat open Pinnen nog goed zette (Motor nummer 4 , DIR=  , Aantalstappen =?)
				while(DispenserOpPositie = true) 											// Wachten tot de beker er uit is gehaald
				{
												
				}
				
				timer0_WachtN100us(int aantal)												// Tijd instellen
				Stepper116(uint8_t 4r, uint8_t rechtsom, uint16_t AantalStappen);
					
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





