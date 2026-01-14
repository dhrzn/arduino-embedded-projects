
#include <Servo.h>


int servopinconnection = 9;
int readingpin = A0;
float lightvalue;
float angle;
Servo myservo;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(readingpin,INPUT);
  myservo.attach(servopinconnection);
  

}

void loop() {
  // put your main code here, to run repeatedly:
lightvalue = analogRead(readingpin);
Serial.println(lightvalue);
angle = (180./700.) * (lightvalue - 800.) + 180. ;
myservo.write(angle);





}
