#include <Arduino.h>

void setup() {
pinMode(LED_BUILTIN OUTPUT);
 digitalWrite(LED_BUILTIN,HIGH);
 delay(1000);
}

void loop() {
  digitalWrite(LED_BUILTIN,LOW);
  delay(2000);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);g
}

