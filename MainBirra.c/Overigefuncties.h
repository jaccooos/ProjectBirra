/*
   Overigefunctie.h



   Date:    21-april-2018

   Author:  J.C. Oostdijk
*/


#ifndef Overigefunctie_H
#define Overigefunctie_H

// temp

#define TEMPERATURE_PRECISION 12

// distance
#define MAX_DISTANCE 50 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

 
///////////////////////////////////////////////////////////////////////////////
// function prototypes
void SentTemp (void);
void SentMagazijn (void);
void SentVooraad (void);
float GetWeight (void);

#endif //Overigefunctie_H
