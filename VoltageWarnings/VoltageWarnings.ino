int greenLED = 2;
int yellowLED = 8;
int redLED = 13;
int reader = A2;
float recordingvalue;
float Voltage;
int del = 750;




void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(reader,INPUT);
pinMode(greenLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
pinMode(redLED,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

recordingvalue = analogRead(reader);
Voltage = (5./1023.) * recordingvalue;
Serial.println(Voltage);

if(Voltage < 3.0) {
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
 
}

if(Voltage > 3.0 && Voltage < 4.0) {
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
}

if(Voltage > 4) {
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
}


  

delay(del);
}
