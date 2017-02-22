/**
 * Fade an LED
 *
 * Pulse the brightness of an LED
 * by using the function analogWrite
 */
#include "Arduino.h"

#define LED_PIN 9
#define DELAY_TIME_MS 20

#define FADE_RATE  5
#define MAX_FADE_BRIGHTNESS  150
#define MIN_FADE_BRIGHTNESS  0

void setup() {
  // nothing happens in setup
}

void loop() {
    // fade in from min to max in increments of FADE_RATE
    for (int fadeValue = MIN_FADE_BRIGHTNESS; fadeValue <= MAX_FADE_BRIGHTNESS; fadeValue += FADE_RATE) {
        // sets the value (range from 0 to 255):
        analogWrite(LED_PIN, fadeValue);
        // wait to see the dimming effect
        delay(DELAY_TIME_MS);
    }

    // fade out from max to min in increments of 5 FADE_RATE
    for (int fadeValue = MAX_FADE_BRIGHTNESS ; fadeValue >= MIN_FADE_BRIGHTNESS; fadeValue -= FADE_RATE) {
        // sets the value (range from 0 to 255):
        analogWrite(LED_PIN, fadeValue);
        // wait to see the dimming effect
        delay(DELAY_TIME_MS);
    }
}
