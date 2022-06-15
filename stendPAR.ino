
int button = 0; // сигнал кнопки, 2 провод в землю

const byte relayPin1 = 3; // вода (синий)
const byte relayPin2 = 7; // воздух (зеленый)
const byte relayPin3 = 5; // топка (желтый мерцание)
const byte relayPin4 = 6; // паронагреватель (красный)


void setup() {
 
 pinMode(button, INPUT);
 
 pinMode(relayPin1, OUTPUT);   
 pinMode(relayPin2, OUTPUT);  
 pinMode(relayPin3, OUTPUT);   
 pinMode(relayPin4, OUTPUT); 
 
 digitalWrite(relayPin1, HIGH);
 digitalWrite(relayPin2, HIGH); 
 digitalWrite(relayPin3, HIGH); 
 digitalWrite(relayPin4, HIGH); 
 

}

void loop() {
  if (digitalRead(button) == LOW ) {
  digitalWrite(relayPin1, LOW); 
  delay(30000);
  digitalWrite(relayPin2, LOW); 
  delay(20000);
  digitalWrite(relayPin3, LOW); 
  delay(30000);
  digitalWrite(relayPin4, LOW); 
  delay(10000);
  digitalWrite(relayPin1, HIGH); 
  digitalWrite(relayPin2, HIGH); 
  digitalWrite(relayPin3, HIGH); 
  digitalWrite(relayPin4, HIGH); 
  
}
else {
  digitalWrite(relayPin1, HIGH); 
  digitalWrite(relayPin2, HIGH); 
  digitalWrite(relayPin3, HIGH); 
  digitalWrite(relayPin4, HIGH); 
  }
}
