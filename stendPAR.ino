
int button = 0; // сигнал кнопки, 2 провод в землю

const byte relayPin1 = 3; // вода (синий)
const byte relayPin2 = 7; // воздух (зеленый)
const byte relayPin3 = 5; // топка (желтый мерцание)
const byte relayPin4 = 6; // паронагреватель (красный)


void setup() {
 
 pinMode(button, INPUT); // назначение кнопки (контакты)
 
 pinMode(relayPin1, OUTPUT);  // назначение реле  
 pinMode(relayPin2, OUTPUT);  // назначение реле  
 pinMode(relayPin3, OUTPUT);  // назначение реле  
 pinMode(relayPin4, OUTPUT);  // назначение реле  
 
 digitalWrite(relayPin1, HIGH); // реле в выключенное состояние при включении ардуино
 digitalWrite(relayPin2, HIGH); // реле в выключенное состояние при включении ардуино
 digitalWrite(relayPin3, HIGH); // реле в выключенное состояние при включении ардуино
 digitalWrite(relayPin4, HIGH); // реле в выключенное состояние при включении ардуино
 

}

void loop() {
  if (digitalRead(button) == LOW ) { // при замыкании контактов запускаются таймеры с включением лампочек по очереди
  digitalWrite(relayPin1, LOW); //включение синей лампы
  delay(30000); // задержка 30 секунд
  digitalWrite(relayPin2, LOW); //включение зеленой лампы
  delay(20000); // задержка 20 секунд
  digitalWrite(relayPin3, LOW); //желтая лампа
  delay(30000); // задержка 30 секунд
  digitalWrite(relayPin4, LOW); //красная лампа
  delay(10000); // задержка 10 секунд
  digitalWrite(relayPin1, HIGH); // выключение ламп после прохождение всех таймеров
  digitalWrite(relayPin2, HIGH); // выключение ламп после прохождение всех таймеров
  digitalWrite(relayPin3, HIGH); // выключение ламп после прохождение всех таймеров
  digitalWrite(relayPin4, HIGH); // выключение ламп после прохождение всех таймеров
  
}
else {   // выключение ламп если контакты разомкнуты
  digitalWrite(relayPin1, HIGH); 
  digitalWrite(relayPin2, HIGH); 
  digitalWrite(relayPin3, HIGH); 
  digitalWrite(relayPin4, HIGH); 
  }
}
