#include <Stepper.h>

int StepsPerRevolution = 2048;
int motSpeed = 10; // 10 rpm (revs per min)
int dt = 500;
Stepper myStepper(StepsPerRevolution,8,10,9,11);




void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);

}

void loop() {
  // put your main code here, to run repeatedly:

  myStepper.step(StepsPerRevolution);
 
}
