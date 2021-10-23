#include <Arduino.h>
//#include <avr8-stub.h>


//extern int __vector_18;
#define _LED_PIN_ (8) // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into



void setup() {

  // initialize serial communication:
  Serial.begin(9600);

  // initialize the LED pin as an output:
  pinMode(_LED_PIN_, OUTPUT);
}



void loop() {

  // see if there's incoming serial data:
  if (Serial.available()) {

    String incomingString = Serial.readString();
    Serial.println(incomingString);
  }
}