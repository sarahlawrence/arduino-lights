const int ledPosition = 13;
const int switchPosition = 6;

void setup() {
  pinMode(switchPosition, INPUT);
  pinMode(ledPosition, OUTPUT);
}

void loop() {
  if (digitalRead(switchPosition) == HIGH) {
    toggle(ledPosition);
  }
}

void toggle(int led) {
  if (digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
