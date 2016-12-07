#include <Servo.h>
Servo myservo;

int sensorPin;
int val; 
int pos; 

float aLoad = 500;
float aReading = 451;
float bLoad = 0;
float bReading = 481;
float load;
int servoPosit;
void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
float newReading = analogRead(A5);
//Serial.println(newReading);
float load = ((bLoad-aLoad)/(bReading-aReading))*(newReading-aReading)+aLoad; 
Serial.print("Load: "); 
Serial.print(load); 
  val = analogRead(A1);
  pos = map(val, 0, 1023, 0, 180)+20;
  
myservo.write(pos);  

servoPosit = analogRead(A4);

Serial.print("servoPosit: ");
Serial.print(servoPosit);
Serial.print("     ");
 
 Serial.print("Val: ");
 Serial.print(val); 
 Serial.print("    ");

  
  Serial.print("Pos Value: ");
  Serial.print(pos); 
  Serial.print("    ");

Serial.println(" "); 

delay(100);
}

