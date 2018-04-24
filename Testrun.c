
/*
*  
*  Testrun.c
* 
*  Date:    21-apr-2018
*  Author:  J.C. Oostdijk
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"
#include "Timer.h"
#include "Stepper.h"
#include "Testrun.h"

///////////////////////////////////////////////////////////////////////////////
// Defines
#define uint8_t CarocelMotor 	= 1;
#define uint8_t DispenserMotor 	= 2;
#define uint8_t TapMotor 		= 3;
#define uint8_t KantelMotor 	= 4;
#define uint8_t DeurMotor 		= 5;
#define uint8_t Linksom 		= 1;
#define uint8_t Rechtsom 		= 2;



///////////////////////////////////////////////////////////////////////////////
// Testrun



bool TestRun (void)
{
	bool CarocelOpPositie 	= false;
	bool DispenserOpPositie = false;
	bool TapOpPositie 		= false;
	bool KantelOpPositie 	= false; 
	bool DeurOpPositie 		= false;
	bool AllesOpPositie 	= false;

	while ( AllesOpPositie == false)
	{
		if(CarocelOpPositie == false)
		{
			Stepper116(CarocelMotor, Linksom ,1);
		}
		if(DispenserOpPositie == false)
		{
			Stepper116(DispenserMotor, Linksom, 1);
		}
		if(TapOpPositie == false)
		{
			Stepper116(TapMotor, Linksom, 1);
		}
		if(KantelOpPositie == false)
		{
			Stepper116(KantelMotor, Linksom, 1);
		}
		if(DeurOpPositie == false)
		{
			Stepper116(DeurMotor, Linksom, 1);
		}
	
	
	
		if((PORTD & _BV(6)) == _BV(6))					//!!nog kloppend maken!!
		{
			CarocelOpPositie = true;
		}
			else
			{
				CarocelOpPositie = false;
			}
		if((PORTD & _BV(6)) == _BV(1))					//!!nog kloppend maken!!
		{
			DispenserOpPositie = true;
		}
			else
			{
				DispenserOpPositie = false;
			}
		if((PORTD & _BV(6)) == _BV(2))					//!!nog kloppend maken!!
		{
			TapOpPositie = true;
		}
			else
			{
				TapOpPositie = false;
			}
		if((PORTD & _BV(6)) == _BV(3))					//!!nog kloppend maken!!
		{
			KantelOpPositie = true;
		}
			else
			{
				KantelOpPositie = false;
			}
		if((PORTD & _BV(6)) == _BV(4))					//!!nog kloppend maken!!
		{
			DeurOpPositie = true;
		}
			else
			{
				DeurOpPositie = false;
			}
		
		
		if((CarocelOpPositie && DispenserOpPositie && TapOpPositie && KantelOpPositie && DeurOpPositie) == true)
		{
			AllesOpPositie = true;
		}
			else
			{
				AllesOpPositie = false;
			}
			
	}


}
