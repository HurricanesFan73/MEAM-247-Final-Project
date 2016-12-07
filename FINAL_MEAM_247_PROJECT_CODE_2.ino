#include <Servo.h> //includes the Servo command library
Servo myservo; //names the servo object myservo

int sensorPin; //initializing variables for joystick reading
int val; 
int pos; 

float aLoad = 500; // initializing variables for calibration of load cell
float aReading = 451;
float bLoad = 0;
float bReading = 481;
float load;
int servoPosit; 

void setup() {
  Serial.begin(9600);
  myservo.attach(9); // servo is now being sent commands via output pin 9
}

void loop() {
float newReading = analogRead(A5); // load cell reading
//Serial.println(newReading);
float load = ((bLoad-aLoad)/(bReading-aReading))*(newReading-aReading)+aLoad; 
Serial.print("Load: "); 
Serial.print(load); 
  
val = analogRead(A1); // potentiometer joystick reading
pos = map(val, 0, 1023, 0, 180)+20; // maps the values of the joystick to degree values from 0 to 180
  
myservo.write(pos);  //passes the position command to the servo

servoPosit = analogRead(A4); //reads servo position (used for debugging)

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

delay(15); // 15 millisecond delay so servo can try to obey command before recieving new commands
}

