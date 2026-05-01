#include <Arduino.h>

#define LED_PIN 12

void setup() {
  Serial.begin(9600); // open serial connection at 9600 baud
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Arduino is alive! Starting to blink.....");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON -> pin 12 = 5V");
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF -> pin 12 = 0V");
  delay(1000);
}