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

    	while (Error)
    	{
		if (ErrorBekersOp == true)
	    	{
 
            	printf (Error);
		DisplayLedValue(1);
            	timer0_WachtN100us(1000);
			
		while(PORTD & _BV(6)) == _BV(6))		// goede pinnen zetten voor reset knop
		{
			reset
		}
		if ((PIND & _BV(7)) == _BV(7))
		{
			Error = false;
		}
	}
}

