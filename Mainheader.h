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


unsigned char Uitstoten 	='s0\n'; // 0
unsigned char Tappen 		='s1\n'; // 1
unsigned char Draaien 		='s2\n'; // 2
unsigned char DeurOpenen	='s3\n'; // 3
unsigned char Draaien 		='s4\n'; // 4
unsigned char Standby	 	='s5\n'; // 5
unsigned char Opstarten 	='s6\n'; // 6

unsigned char Done 			='d\n';
unsigned char Received 	 	='r\n'; 
unsigned char Bestelling 	='b\n';
unsigned char Error		 	='e\n';
unsigned char Temperatuur 	='c';
#define Vooraad 			='v';
#define Magazijn			='m';

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
