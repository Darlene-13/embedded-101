#include <Arduino.h>

#define YELLOW 12
#define RED 11

void allOff(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);

  allOff();

  Serial.begin(9600); // open serial connection at 9600 baud
  Serial.println("Arduino is alive! Starting to blink.....");
}

void loop() {
  allOff();
  digitalWrite(RED, HIGH);
  Serial.println("RED starting...");
  delay(3000);

  allOff();
  Serial.println("RED stopping");
  delay(1000);

  digitalWrite(YELLOW, HIGH);
  Serial.println("YELLOW starting...");
  delay(3000);

  allOff();
  Serial.println("YELLOW stopping");
  delay(1000);
}