
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

bool Error = false;

bool Error (void)
{  
    bool ErrorBekersOp = false;
    bool ErrorTappen = false;
    bool ErrorBiertjeAanHetTappen = false;
    bool ErrorBekerafwezig = false;
    bool ErrorDeurOpen = false;
    bool ErrorDeuropenen = false; 	
    
    while (true)
    if (ErrorBekersOp == true)
    {
    }
    else if (ErrorTappen == true)
    {
    }
    else if (ErrorBiertjeAanHetTappen == true)
    }
    {
    else if (ErrorBekerafwezig == true)
    {
    }
    else if (ErrorDeurOpen == true)
    {
    }
    else if (ErrorDeuropenen == true)
    {
    }
}

