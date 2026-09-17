long leerDistancia(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH) / 59;
}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int distancia = leerDistancia(3, 2);

  
  if (distancia <= 20) {
    digitalWrite(13, LOW);  
    digitalWrite(12, HIGH); 
    digitalWrite(11, LOW);  
    delay(1000);
    
    digitalWrite(13, LOW);  
    digitalWrite(12, LOW);  
    digitalWrite(11, HIGH); 

    while (leerDistancia(3, 2) <= 20) {
      delay(100); 
    }
  } 
  else {
    digitalWrite(13, HIGH); 
    digitalWrite(12, LOW);  
    digitalWrite(11, LOW);  
  }

  delay(50);
}
