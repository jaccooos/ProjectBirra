#include "ports2560.h"
#include "MainBirra.h"
#include "Serial.h"
#include "Testrun.h"
#include "Stepper.h"
#include "Processen.h"
#include "Overigefuncties.h"

///////////////////////////////////////////////////////////////////////////////
// LaatBekerVallen

bool LaatBekerVallen(void)
{
  if (digitalRead(CAROCEL_POS_PIN) == true)           // check positie draaischijf, pin 41, PL6 (Verbetering, Pin 41 is PORTG (WR)
  {
    if (GetDistance() < 49)                         // check beker vooraad of er nog genoeg bekers zijn
    {
      Stepper116(DispenserMotor, Linksom, 100);       //bekerdispenser naar buiten
      if (digitalRead(DISP_OUT_PIN)==true)
      {
        delay(50);
        Stepper116(DispenserMotor, Rechtsom, 100);    //bekerdispenser naar binnen
        if (digitalRead(DISP_IN_PIN)==true)           // detectie dat de dispenser ingetrokken is 
        {
          delay(50);
          return false;
        }
        else
        {
          return true;
        }
        
      }
      else
      {
        return true;
      }
      
    }
    else
    {
      return true;
    }
  }
}

///////////////////////////////////////////////////////////////////////////////
// WaterklepenEnFlowmeter
  
bool WaterklepEnFlowmeter(void)
{
    int PulseCount = 0;
    
    digitalWrite(WATER_VALVE_PIN, HIGH);  
    while (PulseCount <= 134)                  
    {
      if(digitalRead(FLOW_PULSE_PIN)== true)
      {
        PulseCount = (PulseCount + 1);
      }
    }
    digitalWrite(WATER_VALVE_PIN, LOW);                       // Waterklep gaat weer dicht, tap gaat mee uit
    return false;                         // Aangeven dat de Tap klaar is
  
}

///////////////////////////////////////////////////////////////////////////////
// TapBiertje

bool TapBiertje (void)
{

  if (digitalRead(BEKER_TAP_PIN) == true)              // wachten tot beker aanwezig is
  {
    if(WaterklepEnFlowmeter() == false)         //waterklep en flowmeter aanroepen 
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else                                     // Geen beker aanwezig dus er mag niet getapt worden
  {
     return true;
  }
}

///////////////////////////////////////////////////////////////////////////////
// DraaiTafel

bool DraaiTafel(void)
{  
  if(digitalRead(CAROCEL_POS_PIN) == true)                       // carousel op positie, pin toevoegen.
  {
    if(digitalRead(DEUR_DOWN_PIN) == true)                     // deur zit dicht
    {
      Stepper116(CarouselMotor, Rechtsom, 2000);   // Draaitafel draaien naar volgende positie
      if(digitalRead(CAROCEL_POS_PIN) == true)
      {
        return false;              
      }
      else
      {
        return true;
      }
    } 
    else                                    // deur is open
    {
      return true;                          // Deur Staat Open Error
    }         
  } 
  else                                      // corousel niet op positie, pin toevoegen aan digitalRead.
  {
    return true;                           // Draaitafel niet op goede positie Error
  }             
}

///////////////////////////////////////////////////////////////////////////////
// OpenDeur

bool OpenDeur(void)         
{
  if(digitalRead(CAROCEL_POS_PIN) == true)                           // Voorwaarde(carousel op goede positie)
  {   
    if(digitalRead(BEKER_DEUR_PIN) == true)                         // Detecteer of er een beker aanwezig is.
    {
      Stepper116(DeurMotor, Linksom, 500);              // Deur gaat open, Pulsjes nakijken.
      while(digitalRead(BEKER_DEUR_PIN)== true)
      {
        //wachten
      }
        delay(200);
        Stepper116(DeurMotor, Rechtsom, 500);            // Deur gaat dicht, Pulsjes nakijken(zelfde als bij deur open).
    }
    else 
    {
      return true;
    }
  }
  else                      // Carousel is niet goed op positie, proces gaat niet van start
  {
     return true;                                                   //  doet niks.
  }
}
