#include <Servo.h>

Servo _servo;
int const potPin = A0;
int potValue;
int angle;

void setup() {
  Serial.begin(9600);
  _servo.attach(9);
}

void loop() {
  potValue = analogRead(potPin);

  Serial.print("potValue :");
  Serial.print(potValue);

  //Transform the potvalue (0, 1023) to degree between 0 and 179 
  angle = map(potValue, 0, 1023, 0, 179);


  // Display and write new angle to the servo
  Serial.print("\t angle : ");
  Serial.println(angle);
  _servo.write(angle);
}
