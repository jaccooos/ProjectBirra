/*
*  
*  Error.c
* 
*  Date:    12-May-2018
*  Author:  D.Keur
*/
///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include  "Timer.h"	
#include "Testrun.h"
#include "Stepper.h"
#include "Serial.h"
#include "Processen.h"
#include "Overigefuncties.h"
#include "Mainheader.h"
#include "ADC.h"

///////////////////////////////////////////////////////////////////////////////
// Error



void ErrorVolgorde (void)
{  
	bool Error = true;
	bool ErrorGeweest = false;

    	while (Error)
    	{
		if (ErrorBekersOp == true)
	    	{
 
            	printf (Error);
		DisplayLedValue(1);
            	timer0_WachtN100us(1000);
			
		while(PORTD & _BV(AD5)) == _BV(AD5))		// goede pinnen zetten voor reset knop
		{
			do (PORTB & _BV(OC2A/PCINT4)) == _BV(OC2A/PCINT4)) = 1;              //zwaailamp op PORTB ingang 4(OC2A/PCINT4)
		}
		if ((PORTD & _BV(SDA/INT0)) == _BV(SDA/INT0))                 // eindschakelaar zit op pin 40 (PORTD , Pin SDA/INT0)
		{
			Error = false;
		}
	}
		ErrorGeweest = true;
}

