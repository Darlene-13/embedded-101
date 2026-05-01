#include <Arduino.h>

#define YELLOW 12
#define RED 11
#define GREEN 9

void allOff(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN, LOW);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  allOff();

  Serial.begin(9600); // open serial connection at 9600 baud
  Serial.println("Arduino is alive! Starting to blink.....");
}

void loop() {
  // RED — stop
  allOff();
  digitalWrite(RED, HIGH);
  Serial.println("🔴 RED   — Stop");
  delay(3000);

  // RED + YELLOW — get ready
  digitalWrite(YELLOW, HIGH);
  Serial.println("🟡 RED + YELLOW — Get ready...");
  delay(1000);

  // GREEN — go
  allOff();
  digitalWrite(GREEN, HIGH);
  Serial.println("🟢 GREEN — Go!");
  delay(3000);

  // YELLOW — slow down
  allOff();
  digitalWrite(YELLOW, HIGH);
  Serial.println("🟡 YELLOW — Slow down");
  delay(1000);
}