const int trigPin = 2;  //D4
const int echoPin = 4;  //D3

// defines variables
long duration, cm;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

  // Convert the time into a distance
cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
 
Serial.print(cm);
Serial.print("cm");
Serial.println();
