/*
*  Timer.h
*
*  
* 
*  Date:    22-april-2018
*
*  Author:  J.C. Oostdijk
*/


#ifndef Timer_H
#define Timer_H



///////////////////////////////////////////////////////////////////////////////
// function prototypes

void timer0_SetCompareValue(uint8_t);
void timer0_Init(void);
void timer0_Start(void);
void timer0_Wacht100us(void);
void timer0_WachtN100us(int);


#endif //Timer_H
