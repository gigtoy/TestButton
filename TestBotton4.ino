#include <ESP8266WiFi.h>
#include <MCP3208.h>
#include <SPI.h>

MCP3208 adc(D8);
int KeyBread;
int KeyTempeh;
int KeyNatto;
int KeyManual;

void setup() {
  adc.begin();
  Serial.begin(115200);
}

void loop() {
  delay(180);
  KeyBread  = adc.analogRead(2);
  KeyTempeh = adc.analogRead(3);
  KeyNatto  = adc.analogRead(4);
  KeyManual = adc.analogRead(5);
  if(KeyBread < 300){
    Serial.print(F("Bread"));
    Serial.println();
  }
  else if(KeyTempeh < 300){
    Serial.print(F("Tempeh"));
    Serial.println();
  }
  else if(KeyNatto < 300){
    Serial.print(F("Natto"));
    Serial.println();
  }
  else if(KeyManual < 300){
    Serial.print(F("Manual"));
    Serial.println();
  }
}
