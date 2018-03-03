const int ledPosition = 12;
const int switchPosition = 4;

void setup() {
  pinMode(ledPosition, OUTPUT);
  pinMode(switchPosition, INPUT);
}

void loop() {
  if (digitalRead(switchPosition) == HIGH) {
    digitalWrite(ledPosition, HIGH);
  } else {
    digitalWrite(ledPosition, LOW);
  }
}


