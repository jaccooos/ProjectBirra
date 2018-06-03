#include <SoftwareSerial.h>
#include "Serial.h"
#include "Stepper.h"
#include "Ports2560.h"
#include "Overigefuncties.h"

void setup() {
  // put your setup code here, to run once:
  SerialStart();
  PortsInit();
}

void loop() {
   SentTemp();
   SentMagazijn(); 
   SentVooraad();
   
   Serial.println(Done);
   delay(1000);
   
}
