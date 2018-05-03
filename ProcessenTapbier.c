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
                        while (TapAan & BekerIsNietVol)
                        {
                            WaterklepOpen;
                            {
                                if (flowmeter 300ml)
                                {
                                    WaterklepDicht;
                                    Tappenklaar = true;
                                }
                            }

                        }


                    }
                    else (Bekerdoorgeven == true)
                    {
                        Delay()
                    }
                 }
                 else (TappenKlaar == false)
                 {
                      ErrorTappen();
                 }
            }
            else (TapBiertje == true)
            {
                ErrorBiertjeAanHetTappen();
            }
        }
        else (BekerAanwezig == false)
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



