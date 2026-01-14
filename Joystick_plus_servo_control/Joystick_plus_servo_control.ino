
# include <Servo.h>


// for joystick

int Xpin = A0;
float Xvalue;

//for servo

Servo myservo;
int ServoControlPin = 8;
float servoangle; 



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(Xpin,INPUT);
myservo.attach(ServoControlPin);



}

void loop() {
  // put your main code here, to run repeatedly:

Xvalue = analogRead(Xpin);
Serial.println(Xvalue);
servoangle = (-180./1023.) * (Xvalue) + 180. ;
myservo.write(servoangle);



}
