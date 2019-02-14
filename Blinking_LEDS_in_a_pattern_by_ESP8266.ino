
void setup() {
  pinMode(0, OUTPUT);   
  pinMode(13, OUTPUT);
}


void loop() {
  digitalWrite(0, LOW);  
 
  digitalWrite(13, HIGH);
delay(1000);
  digitalWrite(0, HIGH); 
  digitalWrite(13,LOW);
delay(1000);
  digitalWrite(0,LOW);;
  digitalWrite(13,LOW);
delay(1000);
  digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(13,HIGH);
delay(1000);
}
