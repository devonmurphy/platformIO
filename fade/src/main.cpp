/**
 * Fade an LED
 *
 * Pulse the brightness of an LED
 * by using the function analogWrite
 */
#include "Arduino.h"

#define LED_PIN 9
#define DELAY_TIME_MS 30

void setup() {
  // nothing happens in setup
}

void loop() {
    // fade in from min to max in increments of 5 points:
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
        // sets the value (range from 0 to 255):
        analogWrite(LED_PIN, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(DELAY_TIME_MS);
    }

    // fade out from max to min in increments of 5 points:
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
        // sets the value (range from 0 to 255):
        analogWrite(LED_PIN, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(DELAY_TIME_MS);
    }
}


