
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
#include <avr/interrupt.h>

///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports328.h"
#include "Mainheader.h"
#include "delay.h"

//////////////////////////////////////////////////////////////////////////////
int main(void)
{
	Initelize();

	Bool Noodstop == false;
	Bool Error == false;
	uint8_t Bestellingen == 0;

	while (true )
	{
		while (((PIN B && PV(6)) ==! PV(6)))    // check of aan knop uit staat
		{
		}

		Testrun();



		while ((PIN B && PV(6)) == PV(6)        // check of aan knop aan staat
		{
			if (Bestellingen > 0)               // check of er bestellingen zijn
			{
				Error == LaatbekerVallen();     // laat een beker vallen

				if (Error == true)              // check of er een error is/was
				{
					ErrorVolgorde();
				}
				else
				{
					Error == TapBiertje();      // tap het glas vol

					if (Error == true)
					{
						ErrorVolgorde();
					}
					else
					{
						Error == DraaiTafel();  // draai het carocel 120 graden

						if (Error == true)
						{
							ErrorVolgorde();
						}
						else
						{
							Error == Opendeur();        // open de deur

							if (Error == true)
                            {
                                ErrorVolgorde();
                            }
                            else
                            {
							while ((sensorbekeraanweziguitgifte) ==! true)  // check of de beker weg gehaald is
                                {
                                    // doe niks
                                }
                            WachtN100us(10000);

							DichtDeur();                                    // doe de deur dicht

							Bestellingen == (Bestellingen -1);
                            }
						}
					}
				}
			}
			else
			{
				Standby(true);
			}
		}
	}

	return 0;
}
