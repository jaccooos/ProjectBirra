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
	

	if (( PORTL & _PV(6)) == _PV(6))		// check positie draaischijf, pin 41, PL6
	{
		if ((GetDistance()) < 200)			// check beker vooraad of er nog genoeg bekers zijn
		{
			Stepper116(DispenserMotor, linksom, 500); //bekerdispenser naar buiten
			delay();
			Stepper116(DispenserMotor, rechtsom, 500); //bekerdispenser naar binnen
			delay();
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
	 while (TapAan)   //Tap moet aan zijn en de beker mag niet vol zitten
                        		{
                            			WaterklepOpen;                // openzetten van de waterklep
                            			{
                                		if (Flowmeter 300ml)  // Beker zit vol bij 300 ml
                                		{
                                   			WaterklepDicht;   // Waterklep gaat weer dicht
                                    			Tappenklaar = true;  // Aangeven dat de Tap klaar is
                                		}
                            		}
}
///////////////////////////////////////////////////////////////////////////////
// TapBiertje


bool TapBiertje (void)
{
    bool BekerAanwezig    = false;
    bool TappenKlaar      = false;
    bool Bekerdoorgeven   = false;
    uint8_t AantalML	  = 300;


   	if ((PIND & _BV(6)) == _BV(6))         // wachten tot beker aanwezig is
        {
		WaterklepenEnFlowmeter(AantalML);    //waterklep en flowmeter aanroepen   
        }
				 else (Bekerdoorgeven == true)    //wachten tot dat beker doorgegeven is
				 Delay()
                    	}
		else (BekerAanwezig == false)  // Geen beker aanwezig dus er mag niet getapt worden
        	{
            		Error();
        	}	
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
						Wachten																		// Niks doen
					}								
				}	
			else(DeurDicht == false)
			{
				Error																		// Deur Staat Open Error
			}					
		}	
		else(DraaiTafelOpPositie == false)
		{
			Error																					// Draaitafel niet op goede positie Error
		}							
	}
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





