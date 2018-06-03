/*
   Mainheader.h



   Date:    21-april-2018

   Author:  J.C. Oostdijk
*/


#ifndef Stepper_H
#define Stepper_H



#define Linksom     55
#define Rechtsom    56

#define CarouselMotor   51
#define DispenserMotor  52
#define TapMotor        53
#define KantelMotor     54
#define DeurMotor       55

///////////////////////////////////////////////////////////////////////////////
// function prototypes

void Stepper116(uint8_t MotorNummer, uint8_t DIR, uint16_t AantalStappen);
void RichtingLinksom(void);
void RichtingRechtsom(void);

#endif //Serial_H
