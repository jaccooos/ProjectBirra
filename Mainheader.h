/*
*  Mainheader.h
*
*  
* 
*  Date:    21-april-2018
*
*  Author:  J.C. Oostdijk
*/


#ifndef Mainheader_H
#define Mainheader_H

unsigned char Done 			='d';
unsigned char Uitstoten 	='u';
unsigned char Tappen 		='t';
unsigned char Draaien 		='g';
unsigned char Received 	 	='r';
unsigned char Bestelling 	='b';
unsigned char Opstarten 	='o';
unsigned char Error		 	='e';
unsigned char Standby	 	='s';
unsigned char Temperatuur 	='c';

//  data sturen is via "letter" dan "eventueel getal" en dan "/n"

// temp met een punt

/* getallen in de data base 0 is niet verzonden 
							1 is verzonden nog niet bezig
							2 is bezig
							3 is done
*/

///////////////////////////////////////////////////////////////////////////////
// function prototypes



#endif //Mainheader_H
