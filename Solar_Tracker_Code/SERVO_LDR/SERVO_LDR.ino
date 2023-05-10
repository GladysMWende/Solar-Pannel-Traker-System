
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

const int ldrPin = A0; // analog pin 0
int servopin = 3;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(A0, INPUT); // Here LDR sensor is determined as input.
 pinMode(servopin,OUTPUT);
 myservo.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop() 
{ // Void loop is ran again and again and contains main code.
int ldrStatus = analogRead(ldrPin);
if (analogRead(ldrPin) == LOW){
 myservo.write(150);  // tell servo to go to position in variable 'pos'
 Serial.print("High Intensity, Servo at 150 degrees ");
  Serial.println(ldrStatus);
    delay(15);
}
 else {
 myservo.write(0);              // tell servo to go to position in variable 'pos'
    Serial.print("Low Intensity , servo at 0 degrees ");
     Serial.println(ldrStatus);
    delay(15);
} 
}
