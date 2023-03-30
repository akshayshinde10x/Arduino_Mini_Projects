#include <Servo.h> 

int IR = 2;
int LED=13;
int servoPin = 3; 
Servo Servo1; 

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  Servo1.attach(servoPin); 
}
void loop() {
  int val=digitalRead(IR);
  Serial.println(val);
  if(val<1) {
    digitalWrite(LED,HIGH);
    Servo1.write(90); 
    Serial.println("Open");
    delay(1000); 
  } else {
    digitalWrite(LED,LOW);
    Servo1.write(0); 
    Serial.println("Close");
    delay(1000); 
  }
  Serial.println(val);
}
