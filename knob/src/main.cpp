/**
 * Button
 *
 * Turns on an LED if a button is pressed.
 */
#include "Arduino.h"


#define MAX_FADE_BRIGHTNESS  150
#define LED_PIN 9
#define POT_PIN 0

int pinValue = 0;       // variable to store the value coming from the sensor
float fadeValue;        // sets the brightness of the led 

void setup() {
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    pinValue = analogRead(POT_PIN);    // read the value from the sensor
    Serial.println(pinValue);
    //set the fadeValue based on pinValue - scaled 0 to 1023
    fadeValue = (float)pinValue/1023.0f*MAX_FADE_BRIGHTNESS;
    analogWrite(LED_PIN, fadeValue);
}
