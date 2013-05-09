/*
  Automatic Watering System - version 0.1
  
  Hardware: Arduino Duemilanove
            Moisture sensor to A0 over 10k R
 */

const int VERSION = 1
int moistureTreshold = 500

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial.println("Watering System v." + VERSION);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int moisture = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1000);        // delay in between reads for stability
}
