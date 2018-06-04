/*
*  
*  Error
* 
*  Date:    3-June-2018
*  Author:  J.C. Oostdijk
*/
///////////////////////////////////////////////////////////////////////////////

#include "MainBirra.h"
#include "Ports2560.h"
#include "TestRun.h"

bool ErrorVolgorde (void)
{  
  
  bool ErrorGeweest = false;
  uint8_t Getal = 0;

    Serial.println (Error);                        //stuur error status naar RBpi
    digitalWrite(ZWAAILAMP_PIN, HIGH);             //zwaailamp aan
    digitalWrite(LED_RED_PIN, HIGH);               //Rode led aan
    
        
      while(digitalRead(RESET_KNOP_PIN)== LOW)            //wachten tot de reset knop ingedrukt wordt
      {
        if (Getal < 127)                                  // halverwege het optellen aan of uit
        {
           digitalWrite(LED_LOGO_PIN, HIGH);              //Rode led aan
          
        }
        else 
        {
           digitalWrite(LED_LOGO_PIN, LOW);               //Rode led uit
        }
        delay(5); 
        Getal =(Getal + 1);
       
      }
      
     TestRun();
     digitalWrite(ZWAAILAMP_PIN, LOW);                                     //zwaailamp uit
     return true;
}
