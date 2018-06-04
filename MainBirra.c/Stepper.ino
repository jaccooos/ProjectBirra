
/*
*  
*  Stepper
* 
*  Date:    3-June-2018
*  Author:  J.C. Oostdijk
*/
///////////////////////////////////////////////////////////////////////////////

#include "Stepper.h"
#include "Ports2560.h"

void Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen)
{
  if(DIR == Linksom)
  {
    RichtingLinksom();
   
  }
  else if(DIR == Rechtsom)
  {
    RichtingRechtsom();

  }
  EnableMotor();
  
  while(AantalStappen > 0)
  {
    if (MotorNummer == CarouselMotor)
    {
      digitalWrite(X_STEP_PIN ,HIGH);
      delayMicroseconds(1000);
      digitalWrite(X_STEP_PIN ,LOW);
      delayMicroseconds(1000);
    }
    else if(MotorNummer == TapMotor)
    {
      digitalWrite(Y_STEP_PIN ,HIGH);
      delayMicroseconds(1000);
      digitalWrite(Y_STEP_PIN ,LOW);
      delayMicroseconds(1000);
    }
    else if(MotorNummer == DispenserMotor)
    {
      digitalWrite(Z_STEP_PIN ,HIGH);
      delayMicroseconds(1000);
      digitalWrite(Z_STEP_PIN ,LOW);
      delayMicroseconds(1000);
    }
    else if(MotorNummer == KantelMotor)
    {
      digitalWrite(E_STEP_PIN ,HIGH);
      delayMicroseconds(1000);
      digitalWrite(E_STEP_PIN ,LOW);
      delayMicroseconds(1000);
    }
    else if(MotorNummer == DeurMotor)
    {
      digitalWrite(Q_STEP_PIN ,HIGH);
      delayMicroseconds(1000);
      digitalWrite(Q_STEP_PIN ,LOW);
      delayMicroseconds(1000); 
    }
    AantalStappen = AantalStappen - 1;
  }
  DisableMotor();
  
}

///////////////////////////////////////////////////////////////////////////////

void RichtingLinksom(void)
{
  digitalWrite(X_DIR_PIN , HIGH);
  digitalWrite(Y_DIR_PIN , HIGH);
  digitalWrite(Z_DIR_PIN , HIGH);
  digitalWrite(E_DIR_PIN , HIGH);
  digitalWrite(Q_DIR_PIN , HIGH);
}

///////////////////////////////////////////////////////////////////////////////

void RichtingRechtsom(void)
{
  digitalWrite(X_DIR_PIN , LOW);
  digitalWrite(Y_DIR_PIN , LOW);
  digitalWrite(Z_DIR_PIN , LOW);
  digitalWrite(E_DIR_PIN , LOW);
  digitalWrite(Q_DIR_PIN , LOW);
}

///////////////////////////////////////////////////////////////////////////////

void DisableMotor (void)
{
  digitalWrite(X_ENABLE_PIN , HIGH);
  digitalWrite(Y_ENABLE_PIN , HIGH);
  digitalWrite(Z_ENABLE_PIN , HIGH);
  digitalWrite(E_ENABLE_PIN , HIGH);
  digitalWrite(Q_ENABLE_PIN , HIGH);

}

///////////////////////////////////////////////////////////////////////////////

void EnableMotor (void)
{
  digitalWrite(X_ENABLE_PIN , LOW);
  digitalWrite(Y_ENABLE_PIN , LOW);
  digitalWrite(Z_ENABLE_PIN , LOW);
  digitalWrite(E_ENABLE_PIN , LOW);
  digitalWrite(Q_ENABLE_PIN , LOW);

}

///////////////////////////////////////////////////////////////////////////////


