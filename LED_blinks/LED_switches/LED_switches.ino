const int ledPosition = 13;
const int switchPosition = 6;

void setup() {
  pinMode(ledPosition, OUTPUT);
}

void loop() {
  if(digitalRead(switchPosition)) {
    toggle(ledPosition);
  }

  //TODO: make it persist the state.
}


void toggle(int led) {
  if (digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
