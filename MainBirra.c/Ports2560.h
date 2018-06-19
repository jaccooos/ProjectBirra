/*
   Ports2560.h



   Date:    21-april-2018

   Author:  J.C. Oostdijk
*/


#ifndef Ports2560_H
#define Ports2560_H

// For RAMPS 1.4
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

 
#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

#define E_STEP_PIN         26
#define E_DIR_PIN          28
#define E_ENABLE_PIN       24

#define Q_STEP_PIN         36
#define Q_DIR_PIN          34
#define Q_ENABLE_PIN       30

//knoppen en schakelaars
#define AANUIT_PIN         40 // let op anders dan op de tekening
#define RESET_KNOP_PIN     42
#define DEUR_DOWN_PIN      0  
#define DEUR_UP_PIN        18  
#define DISP_IN_PIN        2  
#define DISP_OUT_PIN       14  
#define CAROCEL_POS_PIN    41  
#define BEKER_DEUR_PIN     17  
#define BEKER_TAP_PIN      23 

//LED and light's
#define LED_GREEN_PIN        35
#define LED_BLUE_PIN      37
#define LED_RED_PIN       39
#define LED_LOGO_PIN       9
#define ZWAAILAMP_PIN      10

//water
#define WATER_VALVE_PIN    8  
#define FLOW_PULSE_PIN     29 

//Gewicht en temp
#define LOADCEL_PIN        A3
#define ONE_WIRE_BUS       27

//Afstands sensor
#define TRIGGER_PIN        25  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN           31  // Arduino pin tied to echo pin on the ultrasonic sensor.

   
///////////////////////////////////////////////////////////////////////////////
// function prototypes
void PortsInit (void);

#endif //Ports2560_H
