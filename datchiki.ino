
#include <Arduino.h>
const int buttonPin =2;
const int y = 13;
int buttonst = 0;
int period = 100;
uint32_t t1,t2;
const int pin1 = 1;
const int pin2 = 2;
int val1 = 0;
int val2 = 0;
float len = 0.05;

void setup(){
pinMode (pin1,INPUT);
pinMode(pin2,INPUT);
pinMode (y, OUTPUT);
pinMode (buttonPin, INPUT);
Serial.begin(9600);
}
void loop() {
buttonst = digitalRead(buttonPin);
if (buttonst == HIGH){
  digitalWrite(y,HIGH);
}
else{digitalWrite(y,LOW);

}

val1 = digitalRead(pin1);
val2 = digitalRead(pin2);
  while(val1 == LOW){
  if (millis() - t1 >= period)
  { t1 = millis();
  }
  }
 while(val2 == LOW){
   if (millis() - t2 >= period){
     t2 = millis();
   }
 }
 Serial.print(t2 - t1);
 float v = len/(t2 - t1);
 Serial.print(v);
 }
 


