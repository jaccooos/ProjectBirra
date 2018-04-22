/*
*  ports328.c
*
*  Copyright (c) 2012 by Avans Hogeschool
*
*  Date:     27-mar-2012
*  Author:   Gerbrandt Schor
*
*  IO ports for Arduino Uno board. Uses:
*      8-bit output on port D (bits 7..0)
*      4-bit input  on port B (bits 3..0)
*/


///////////////////////////////////////////////////////////////////////////////
// system includes

#include <inttypes.h>
#include <avr/io.h>
#include <stdbool.h>


///////////////////////////////////////////////////////////////////////////////
// application specific includes

#include "ports2560.h"


///////////////////////////////////////////////////////////////////////////////
// void portsInit(void)

void initPorts(void)
{

//	DDRA = 0b00000000;	
	DDRB = 0b00000000;		
	DDRC = 0b00000000;		
	DDRD = 0b00000000;		
//	DDRE = 0b00000000;				
//	DDRF = 0b00000000;		
//	DDRG = 0b00000000;		
//	DDRH = 0b00000000;		
//	DDRI = 0b00000000;		
//	DDRJ = 0b00000000;		
//	DDRK = 0b00000000;		
//	DDRL = 0b00000000;		


}
