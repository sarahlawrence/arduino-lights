const int ledPosition = 13;
const int switchPosition = 6;

void setup() {
  pinMode(ledPosition, OUTPUT);
}

void loop() {

  //TODO: when button is pressed
  toggle(ledPosition);

  // do we need to debounce ?
}


void toggle(int led) {
  if (digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
