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
    if (GetDistance() < 40)                         // check beker vooraad of er nog genoeg bekers zijn
    {
      
      while (digitalRead(DISP_OUT_PIN)==true)
      {
        Stepper116(DispenserMotor, Linksom, 1);    //bekerdispenser naar binnen
      }
      Stepper116(DispenserMotor, Rechtsom, 3000);       //bekerdispenser naar buiten
      return false;
     
    }
    else
    {
      return true;
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

  //if (digitalRead(BEKER_TAP_PIN) == true)              // wachten tot beker aanwezig is
  //{
    /*
    if(WaterklepEnFlowmeter() == false)         //waterklep en flowmeter aanroepen 
    {
      return false;
    }
    else
    {
      return true;
    }
    */
   digitalWrite(WATER_VALVE_PIN, HIGH);
   delay(3000);
   digitalWrite(WATER_VALVE_PIN, LOW);
   return false;
  //}
  //else                                     // Geen beker aanwezig dus er mag niet getapt worden
  //{
  //   return true;
  //}
}

///////////////////////////////////////////////////////////////////////////////
// DraaiTafel

bool DraaiTafel(void)
{  
  Stepper116(CarouselMotor, Linksom, 200);   // Draaitafel draaien naar volgende positie
  while(digitalRead(CAROCEL_POS_PIN) == true)                       // carousel op positie, pin toevoegen.
  {
    
    Stepper116(CarouselMotor, Linksom, 1);   // Draaitafel draaien naar volgende positie
   
  } 
  Stepper116(CarouselMotor, Linksom, 75);             
}

///////////////////////////////////////////////////////////////////////////////
// OpenDeur

bool OpenDeur(void)         
{
    //if(digitalRead(BEKER_DEUR_PIN) == true)                         // Detecteer of er een beker aanwezig is.
    //{
      while(digitalRead(DEUR_UP_PIN) == true)
      {
         Stepper116(DeurMotor, Linksom, 1); 
      }
      while(digitalRead(BEKER_DEUR_PIN)== true)
      {
        //wachten
      }
        delay(200);
        Stepper116(DeurMotor, Rechtsom, 950);            // Deur gaat dicht, Pulsjes nakijken(zelfde als bij deur open).
    //}
    //else 
    //{
    //  return true;
    //}
  
}
