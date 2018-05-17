
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
#include <stdio.h>


///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include "Mainheader.h"
#include "Serial.h"
#include "Timer.h"
#include "Testrun.h"

///////////////////////////////////////////////////////////////////////////////
// defines 

uint8_t Bestellingen = 0;
char cmd;



///////////////////////////////////////////////////////////////////////////////
// USART receiver ISR

ISR(USART_RX_vect)											// dit gebeurt er als er een serial intrupt is!!!
{
	
	cmd = UDR0;
	
	if(cmd == Bestelling)
	{
		
		Bestellingen =  Bestellingen + 1;
	 	usart_Send(Received);
	}

}

///////////////////////////////////////////////////////////////////////////////
// PIN ISR

ISR(INT0_vect) 											// pin change interrupt service routine 
{
    while((PORTD & _BV(6)) != _BV(6))
	{
		// wacht tot de nood stop weer uit getrokken wordt
	}
	ErrorVolgorde();
}
///////////////////////////////////////////////////////////////////////////////
// Initelize

void Initialize (void)
{
	initPorts();
	InitializeSerial();
	timer0_Init();

}


//////////////////////////////////////////////////////////////////////////////
int main(void)
{
	Initialize();

	bool Noodstop = false;
	bool Error = false;

	bool SensorBekerAanwezigUitgifte = false;
	

	while (true )
	{
		while ((PORTD & _BV(6)) != _BV(6))   // check of aan knop uit staat
		{
									//doe niks 
			printf(Standby);
			timer0_WachtN100us(1000);

		}

		TestRun();



		while ((PIND & _BV(6)) == _BV(6))        // check of aan knop aan staat
		{
			printf(GetTemp());					// temperatuur door sturen

			if (Bestellingen > 0)               // check of er bestellingen zijn
			{
				Error = LaatBekerVallen();     // laat een beker vallen

				if (Error == true)              // check of er een error is/was
				{
					ErrorVolgorde();
				}
				else
				{
					Error = TapBiertje();      // tap het glas vol

					if (Error == true)
					{
						ErrorVolgorde();
					}
					else
					{
						Error = DraaiTafel();  // draai het carocel 120 graden

						if (Error == true)
						{
							ErrorVolgorde();
						}
						else
						{
							Error = OpenDeur();        // open de deur

							if (Error == true)
                            {
                                ErrorVolgorde();
                            }
                            else
                            {
							while ((SensorBekerAanwezigUitgifte) =! true)  // check of de beker weg gehaald is
                                {
                                     
									// doe niks
                                }

                            timer0_WachtN100us(1000);								//even wachten

							DichtDeur();                                   			//doe de deur dicht

							Bestellingen = (Bestellingen -1);
                            }
						}
					}
				}
			}
			else
			{
				usart_Send(Done);
			}
		}
	}

	return 0;
}
