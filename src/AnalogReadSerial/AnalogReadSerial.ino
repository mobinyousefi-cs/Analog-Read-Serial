/*
===========================================================
 Project:    Analog Read Serial
 File:       AnalogReadSerial.ino
 Author:     Mobin Yousefi (GitHub: github.com/mobinyousefi)
 Created:    2025-11-22
 Updated:    2025-11-22
 License:    MIT License (see LICENSE file for details)
===========================================================
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
