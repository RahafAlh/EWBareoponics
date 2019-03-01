#include <Wire.h> 
 
const int analogPin = A0; 
float reading = 0; 
float voltage = 0;


void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(analogPin);
  voltage = reading * (5.0 / 1023.0)*1000;
  reading = (voltage-500)*0.0375; // assuming voltage is in mV 
  Serial.println(reading);
  
}
