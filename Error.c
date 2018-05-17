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
    
    while (Error)
    if (ErrorBekersOp == true)
    {   
                      
            Errorled();
            delay();            
    }
    else if (ErrorTappen == true)
    {
   
            Errorled();
            delay();
    }
    else if (ErrorBiertjeAanHetTappen == true)
    }
          
            Errorled();
            delay();
    {
    else if (ErrorBekerafwezig == true)
    {
         
            Errorled();
            delay();

    }
    else if (ErrorDeurOpen == true)
    {
   
            Errorled();
            delay();

    }
    else if (ErrorDeuropenen == true)
    {
 
            Errorled();
            delay();
    }
}

