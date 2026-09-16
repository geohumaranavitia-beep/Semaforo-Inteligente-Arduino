void setup(){
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);

  
pinMode(2, INPUT);

}

void loop(){
  int boton = digitalRead(2);
  if (boton == HIGH) {
   
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
delay(1500);
 
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
delay(4000);

}
  else {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
  }
}