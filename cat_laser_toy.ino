#include <Servo.h>
#define potX A0
#define potY A1

Servo motorX;
Servo motorY;

int anguloX;
int anguloY;

void setup() {
  motorX.attach(2);
  anguloX=0;
  motorX.write(anguloX);

  motorY.attach(3);
  anguloY=0;
  motorY.write(anguloY);

}

void loop() {
  anguloX=map(analogRead(potX),0,1023,0,180);
  motorX.write(anguloX);
  delay(50);

  anguloY=map(analogRead(potY),0,1023,0,180);
  motorY.write(anguloY);

}