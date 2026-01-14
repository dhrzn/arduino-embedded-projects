int potpin = A2;
int greenLED = 6;
int potvalue;
float LEDvalue;
int del = 500;


void setup() {
  // put your setup code here, to run once:

pinMode(potpin,INPUT);
pinMode(greenLED,OUTPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  potvalue = analogRead(potpin);
  LEDvalue = (255./1023.) * potvalue;
  analogWrite(greenLED,LEDvalue);
  Serial.println(LEDvalue);
  delay(del);

}
