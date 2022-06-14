
int button = 1;

const byte relayPin1 = 3; 
const byte relayPin2 = 4; 
const byte relayPin3 = 5; 
const byte relayPin4 = 6; 

void setup() {


 


 pinMode(button, INPUT);
 pinMode(relayPin1, OUTPUT);   
 pinMode(relayPin2, OUTPUT);  
 pinMode(relayPin3, OUTPUT);   
 pinMode(relayPin4, OUTPUT); 
 
 digitalWrite(relayPin1, HIGH); 
 digitalWrite(relayPin2, HIGH); 

}

void loop() {
  if (digitalRead(button) == HIGH) {
  digitalWrite(relayPin2, HIGH); 
} else{
   digitalWrite(relayPin2, LOW);}

}
