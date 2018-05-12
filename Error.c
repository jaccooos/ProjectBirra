
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
    uint8_t Errorled = pin?
    
    while (true)
    if (ErrorBekersOp == true)
    {   
        while (true)
        {   
            Errorled();
            delay();
        }
    }
    else if (ErrorTappen == true)
    {
        while (true)
        {   
            Errorled();
            delay();
        }
    }
    else if (ErrorBiertjeAanHetTappen == true)
    }
        while (true)
        {   
            Errorled();
            delay();
        }
    {
    else if (ErrorBekerafwezig == true)
    {
        while (true)
        {   
            Errorled();
            delay();
        }
    }
    else if (ErrorDeurOpen == true)
    {
        while (true)
        {   
            Errorled();
            delay();
        }
    }
    else if (ErrorDeuropenen == true)
    {
        while (true)
        {   
            Errorled();
            delay();
        }
    }
}

