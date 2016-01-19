#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
  
}

void loop() 
{	
	float sample = tempSensor.readCelsius();
	ssDisplay.write(sample);
	Serial.println(sample);
  
	delay(20); 
}
