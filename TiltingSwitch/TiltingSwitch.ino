int tiltPin = 2;
int tiltVal;
int greenLED = 8;
int redLED = 9;



void setup() {
 
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);

pinMode(greenLED,OUTPUT);
pinMode(redLED,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:


tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);


if (tiltVal ==0) {

 digitalWrite(greenLED,HIGH);
 digitalWrite(redLED,LOW);
}

else {

  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
}

}
