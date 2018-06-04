/*
*  
*  Testrun.c
* 
*  Date:    21-apr-2018
*  Author:  J.C. Oostdijk
*/

#include "TestRun.h"
#include "Stepper.h"
///////////////////////////////////////////////////////////////////////////////
// Testrun

bool TestRun (void)
{
  bool CarocelOpPositie   = false;
  bool DispenserOpPositie = false;
  bool DeurOpPositie      = false;
  bool AllesOpPositie     = false;

  while ( AllesOpPositie == false)
  {
    if(CarocelOpPositie == false)
    {
      Stepper116(CarouselMotor, Linksom ,1);
    }
    if(DispenserOpPositie == false)
    {
      Stepper116(DispenserMotor, Linksom, 1);
    }
    if(DeurOpPositie == false)
    {
      Stepper116(DeurMotor, Linksom, 1);
    }
  
  
  
    if(digitalRead(CAROCEL_POS_PIN) == true)          
    {
      CarocelOpPositie = true;
    }
      else
      {
        CarocelOpPositie = false;
      }
    if(digitalRead(DISP_IN_PIN) == true)          
    {
      DispenserOpPositie = true;
    }
      else
      {
        DispenserOpPositie = false;
      }
    if(digitalRead(DEUR_DOWN_PIN) == true)          
    {
      DeurOpPositie = true;
    }
      else
      {
        DeurOpPositie = false;
      }
      
    if((CarocelOpPositie && DispenserOpPositie && DeurOpPositie) == true)
    {
      AllesOpPositie = true;
    }
      else
      {
        AllesOpPositie = false;
      }
  }
}
