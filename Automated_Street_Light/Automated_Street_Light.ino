int ldr;

void setup() {
pinMode(9,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(115200);
}

void loop() {
  
ldr=analogRead(A0);
Serial.println(ldr);
if(ldr>=2){
  digitalWrite(9,LOW);
  Serial.println("Light OFF");
}else{
    digitalWrite(9,HIGH);
    Serial.println("Light ON");
  }
}
