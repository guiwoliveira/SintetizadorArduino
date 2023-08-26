#include "pitches.h"

const int speaker = 8;
const int button = 2;

int buttonState = 1;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(button);

  if (buttonState != 1) {
    tone(speaker, 261.625519);
    delay(300);
    tone(speaker, 329.627533);
    delay(300);
    tone(speaker, 391.995392);
    delay(300);
    tone(speaker, 329.627533);
    delay(300);
  } else {
      noTone(speaker);
  }

  if (buttonState != 1) {
    tone(speaker, 261.625519);
    delay(300);
    tone(speaker, 329.627533);
    delay(300);
    tone(speaker, 391.995392);
    delay(300);
    tone(speaker, 329.627533);
    delay(300);
  } else {
      noTone(speaker);
  }

}
