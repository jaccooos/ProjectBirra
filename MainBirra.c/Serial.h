/*
   Mainheader.h



   Date:    21-april-2018

   Author:  J.C. Oostdijk
*/

//bool ErrorGeweest = false;

#ifndef Serial_H
#define Serial_H


#define Uitstoten   's0' // 0
#define Tappen      's1' // 1
#define Draaien     's2' // 2
#define DeurOpenen  's3' // 3
              //    's4' // 4
#define Standby     's5' // 5
#define Opstarten   's6' // 6

#define Done          'd'
#define Received      'r'
#define Bestelling    'b'
#define Error         "e"
#define Temperatuur   'c'
#define Vooraad       'v'
#define Magazijn      'm'

//  data sturen is via "letter" dan "eventueel getal" en dan "/n"

// temp met een punt

/* getallen in de data base 0 is niet verzonden
              1 is verzonden nog niet bezig
              2 is bezig
              3 is done
*/


///////////////////////////////////////////////////////////////////////////////
// function prototypes

void SerialStart (void);

#endif //Serial_H
