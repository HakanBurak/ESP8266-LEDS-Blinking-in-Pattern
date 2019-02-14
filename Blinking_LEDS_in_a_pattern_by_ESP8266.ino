
void setup() { // Setup codes needed for recognizing your pin connections.      
  pinMode(0, OUTPUT);   
  pinMode(13, OUTPUT);
}
void loop() {   // In loop all codes you wrote will be executed always in a loop. :)
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
