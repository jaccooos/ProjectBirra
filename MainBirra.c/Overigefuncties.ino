#include <OneWire.h>
#include <DallasTemperature.h>

#include <NewPing.h>


void SentTemp (void)
{

  // Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
  OneWire oneWire(ONE_WIRE_BUS);
  
  // Pass our oneWire reference to Dallas Temperature.
  DallasTemperature sensors(&oneWire);

  // Start up the library
  sensors.begin();
  
  float Temp = 0;
  sensors.requestTemperatures(); // Send the command to get temperatures
  Temp = sensors.getTempCByIndex(0);
  Serial.print(Temperatuur);
  Serial.println(Temp);

}

void SentMagazijn (void)
{
  float Distance = 0;
  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
  Distance = sonar.ping_cm();
  Distance = ((Distance/50)*100);
  Serial.print(Magazijn);
  Serial.println (Distance);
}

void SentVooraad (void)
{
  float Weight =0;
  Weight = GetWeight();
  Serial.print(Vooraad);
  Serial.println(Weight);
  
}

float GetWeight (void)
{
  float Weight = 0;
  float ADCValue = 0;
  
  ADCValue = analogRead(LOADCEL_PIN);
  Weight = map(ADCValue, 0, 1023, 000, 5000);
  Weight = (Weight/100);
  return Weight;
  
}

 

