
int redLED = 13;
int greenLED = 8;
int readingpin = A0;
int voltagereading;
int del = 500;
int del2 = 10;




void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(readingpin,INPUT);
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  voltagereading = analogRead(readingpin);
  Serial.println(voltagereading);

if (voltagereading < 100) {
digitalWrite(redLED,HIGH);
Serial.println(voltagereading);


}

else {
  digitalWrite(redLED,LOW);
  Serial.println(voltagereading);
  
  
}




if (voltagereading > 500) {
digitalWrite(greenLED,HIGH);
Serial.println(voltagereading);
}
  else {
  digitalWrite(greenLED,LOW);
  Serial.println(voltagereading);

    
  }








delay(del2);




}
