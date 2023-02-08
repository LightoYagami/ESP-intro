#include <Arduino.h>

int val  =  0;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600);
}

void loop() {  
   val = hallRead();
   if(val >= 80) {
     digitalWrite(LED_BUILTIN, HIGH);
     delay(1000);
     }
   
   else {
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

   //Serial.println(val);
   delay(200);
  }
}

