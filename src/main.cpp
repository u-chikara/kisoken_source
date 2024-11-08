#include <Arduino.h>
#include <Stepper.h>

Stepper SM1=Stepper(200,0,4,2,1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  SM1.setSpeed(120);
  SM1.step(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("hello,world!\r\n");
  SM1.step(200);
  SM1.step(-200);
  //delay(100);
}

