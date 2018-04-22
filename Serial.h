/*
*  Serial.h
*
* 
*  Date:    21-april-2018
*
*  Author:  J.C. Oostdijk
*/


#ifndef Serial_H
#define Serial_H



///////////////////////////////////////////////////////////////////////////////
// function prototypes

void UartSendByte(uint8_t);
void usart_EnableReceiveInterrupts(void);
void EnableInterrupts(void);
void usart_Init(void);
void usart_Send(unsigned char);
void InitializeSerial(void);

#endif //Serial_H
