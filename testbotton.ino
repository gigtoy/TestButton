#include <ESP8266WiFi.h>
#include <MCP3208.h>
#include <SPI.h>

MCP3208 adc(D8);

int a = 0;
int b = 0;
int c = 0;

void setup() {
  adc.begin();
  Serial.begin(115200);
}

void loop() {

  delay(160);
  a = adc.analogRead(0);
  b = adc.analogRead(1);
  if(a >= 2000){
    c = c+1;
    Serial.print(c);
    Serial.println();
  }
  else if(b >= 2000){
    c = c-1;
    Serial.print(c);
    Serial.println();
  }
}
