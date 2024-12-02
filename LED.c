#include <Arduino.h> 

#define LED 2
void setup() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}

void loop() {
  // Nothing to do here
}
