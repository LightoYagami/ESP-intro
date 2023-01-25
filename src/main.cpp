#include <Arduino.h>

void setup(){
  Serial.begin(115200);
}

void loop(){
    Serial.println(touchRead(4));
    delay(300);
}
