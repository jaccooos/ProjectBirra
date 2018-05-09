/*
*  ADC.h
*
*  Copyright (c) 2016 by Avans Hogeschool.
* 
*  Date:    28-may-2016
*  Author:  Roel Smeets
*/

#ifndef _ADC_H
#define _ADC_H

#include <stdbool.h>

#define ADC_MIN_CHANNEL		0
#define ADC_MAX_CHANNEL		16

#define ADC_MIN_VALUE		0
#define ADC_MAX_VALUE		255


///////////////////////////////////////////////////////////////////////////////
// function prototypes

void adc_Init(void);
void adc_SelectChannel(uint8_t ADCChannel);
void adc_StartConversion(void);
bool adc_IsBusy(void);
void adc_WaitForCompletion(void);
uint16_t adc_ReadData(void);
uint8_t  adc_GetVoltage(uint8_t channel);
bool IsLdrDark(void);

#endif  // _ADC_H
