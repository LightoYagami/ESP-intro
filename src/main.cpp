#include <Arduino.h>

void setup(){
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  Serial.print("Coming from setup");
}

void loop(){
    Serial.println(touchRead(4));
    Serial.print("Coming from loop");
    delay(300);

    if(touchRead(4) > 40){
        digitalWrite(2, LOW);
    }
    else{
        digitalWrite(2, HIGH);
    }
}
