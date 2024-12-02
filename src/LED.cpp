#include <Arduino.h>

// Define the pin for the LED
#define LED_PIN 2  // On most ESP32 boards, the built-in LED is connected to GPIO2

void setup() {
    // Initialize the LED pin as an output
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Turn the LED on
    digitalWrite(LED_PIN, HIGH);
    delay(1000);  // Wait for 1 second

    // Turn the LED off
    digitalWrite(LED_PIN, LOW);
    delay(1000);  // Wait for 1 second

    // Hey this is from Local Git 
}
