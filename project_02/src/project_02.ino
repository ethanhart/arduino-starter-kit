/*
Project 02
Spaceship Interface
Make some lights blink and stuff

Author: Ethan Hart
Date: 2015-01-01
*/

int switchState = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  switchState = digitalRead(2); // read input from pin 2

  if (switchState == LOW) {
    // this means the button is not pressed
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); // wait 1/4 second
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // wait 1/4 second
  }
  else { // button is pressed
    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, HIGH); // red LED
    digitalWrite(5, HIGH); // red LED
  }
} // start loop over again
