#include <Arduino.h>

const int led_pin = 32;

void setup() {
  Serial.begin(115200);

  pinMode(led_pin, OUTPUT);

  Serial.println("Startup Complete!");
}

void loop() {
  Serial.println("Looping!");
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(500);
}
