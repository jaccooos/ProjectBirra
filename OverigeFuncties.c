/*
*  
*  Overige Functies
* 
*  Date:    21-apr-2018
*  Author:  G.Storimans
*/

//////////////////////////////////////// Overige Functies ////////////////////////////////////////

//////////////////////////////////////// Led Functies     ////////////////////////////////////////


void DisplayLedValue(uint8_t value)
{
	uint8_t v = 0;

	if (value <= 3)			// skip invalid values
	{
		v = PORTB & 0xfc;	// clear bits 1..0, retain bits 7..2
		v = v | value;		// OR with LED value in bits 1..0
	
		PORTB = value;
	}
}













