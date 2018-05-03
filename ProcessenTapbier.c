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
    bool BekerAanwezig    = false;
    bool TappenKlaar      = false;
    bool TapBiertje       = false;
    bool WachtOpTap       = false;
    bool Bekerdoorgeven   = false;
    uint8_t WaterklepOpen;
    uint8_t WaterklepDicht;

    while (true)
    {
        if (BekerAanwezig == true)         // wachten tot beker aanwezig is
        {
             if (Tapbiertje == false)      // biertje is niet aan het tappen
             {
                 if  (TappenKlaar == true) // tappen is klaar
                    {
                    if (Bekerdoorgeven == false)   //bekerdoorgeven is klaar controle
                    {
                        while (TapAan & BekerIsNietVol)   //Tap moet aan zijn en de beker mag niet vol zitten
                        {
                            WaterklepOpen;                // openzetten van de waterklep
                            {
                                if (flowmeter 300ml)  // Beker zit vol bij 300 ml
                                {
                                    WaterklepDicht;   // Waterklep gaat weer dicht
                                    Tappenklaar = true;  // Aangeven dat de Tap klaar is
                                }
                            }

                        }


                    }
                    else (Bekerdoorgeven == true)    //wachten tot dat beker doorgegeven is
                    {
                        Delay()
                    }
                 }
                 else (TappenKlaar == false)  // Tap is niet klaar dus mag hij niet door
                 {
                      ErrorTappen();
                 }
            }
            else (TapBiertje == true)   // Biertje wordt nog getapt
            {
                ErrorBiertjeAanHetTappen();
            }
        }
        else (BekerAanwezig == false)  // Geen beker aanwezig dus er mag niet getapt worden
        {
            ErrorBekerafwezig();
        }
}






///////////////////////////////////////////////////////////////////////////////
// DraaiTafel

bool DraaiTafel(void)
{

}

///////////////////////////////////////////////////////////////////////////////
// OpenDeur





///////////////////////////////////////////////////////////////////////////////
// DichtDeur

bool DichtDeur(void)
{

}



