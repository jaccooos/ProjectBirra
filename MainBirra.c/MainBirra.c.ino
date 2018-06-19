/*
*  
*  MainBirra
* 
*  Date:    3-June-2018
*  Author:  J.C. Oostdijk
*/
///////////////////////////////////////////////////////////////////////////////

#include <SoftwareSerial.h>
#include "Serial.h"
#include "Stepper.h"
#include "Ports2560.h"
#include "Overigefuncties.h"
#include "MainBirra.h"
#include "Processen.h"



///////////////////////////////////////////////////////////////////////////////

void setup() {
  
  SerialStart();
  PortsInit();
  digitalWrite(ZWAAILAMP_PIN, LOW);
  digitalWrite(LED_RED_PIN, HIGH);
  digitalWrite(LED_GREEN_PIN, HIGH);
  digitalWrite(LED_BLUE_PIN, HIGH);
  digitalWrite(LED_LOGO_PIN, HIGH);
  digitalWrite(WATER_VALVE_PIN, LOW);

  
}

///////////////////////////////////////////////////////////////////////////////

void loop() 
{
  
  SentTemp();         // stuur temp door
  SentMagazijn();     // stuur beker vooraad door
  SentVooraad();      // stuur vooraad bier door
  
  LaatBekerVallen();
  
  Serial.println(TapBiertje());
  DraaiTafel();
  
  delay(1000);
  
  OpenDeur();
  

 



  /*
  bool error = false;
  
  
  while ( digitalRead(AANUIT_PIN)== false)   // check of aan knop uit staat
  {
    //doe niks 
    Serial.println(Standby);        //stuur status standby naar RBpi
    LogoHartslag();
   
    SentTemp();         // stuur temp door
    SentMagazijn();     // stuur beker vooraad door
    SentVooraad();      // stuur vooraad bier door
  }

  //TestRun();            // doe een reset/testrun na in standby geweest te zijn


    while (digitalRead(AANUIT_PIN)== true)        // check of aan knop aan staat (zit op eindschakelaar onbekende Port?)
    {
      
      Serial.println(Bestellingen);
      delay(1000);
      SentTemp();                       // stuur temp door
      SentMagazijn();                   // stuur beker vooraad door
      SentVooraad();                    // stuur vooraad bier door
      serialEvent();
      
      if (Bestellingen > 0)             // check of er bestellingen zijn
      {
        Serial.println( Bestellingen);
        error = LaatBekerVallen();      // laat een beker vallen
        if (error == true)              // check of er een error is/was
        {
          ErrorVolgorde();
        }
        else
        {
          error = TapBiertje();         // tap het glas vol

          if (error == true)
          {
            ErrorVolgorde();
          }
          else
          {
            error = DraaiTafel();       // draai het carocel 120 graden

            if (error == true)
            {
              ErrorVolgorde();
            }
            else
            {
              error = OpenDeur();       // open de deur

              if (error == true)
                {
                    ErrorVolgorde();
                }
                else
                {
                  Bestellingen = (Bestellingen -1);
                }
            }
          }
        }
      }
      else
      {
        Serial.println(Done);
      }
    }
    
}

///////////////////////////////////////////////////////////////////////////////

      

void serialEvent() 
{
  while (Serial.available()) 
  {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') 
    {
      inputString ="";
      Bestellingen =(Bestellingen +1);
      Serial.println(Received);
      
    }
  }
  */
}


