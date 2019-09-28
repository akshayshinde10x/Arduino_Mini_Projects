int red = 5;
int green = 6;
int buzzer = 7;
int smokeSensor = A2;
// Your threshold value
int sensorThres = 300;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeSensor);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    noTone(buzzer);
  }
  delay(100);
}
