#include <ESP8266WiFi.h>
#include "DHT.h"

#define DHTPIN D5       // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

#define Plus_PIN  D7
#define Minus_PIN D6

int a = 0;
int b = 0;
int c = 0;

void setup() {
  Serial.begin(9600);
//setup  pin degital input.
  pinMode(Minus_PIN, INPUT);
  pinMode(Plus_PIN, INPUT);
}

void loop() {
  delay(500);
  a = digitalRead(Plus_PIN);
  b = digitalRead(Minus_PIN);
  if(a == LOW){
    c = c+1;
    Serial.print(c);
    Serial.println();
  }
  if(b == LOW){
    c = c-1;
    Serial.print(c);
    Serial.println();
  }
}
