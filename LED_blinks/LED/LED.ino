const int ledAlpha = 3; // currently red
const int ledBeta = 6; // currently blue

const int slowInterval = 500;
const int midInterval = 250;
const int fastInterval = 100;



void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledAlpha, OUTPUT);
  pinMode(ledBeta, OUTPUT);
}

void loop() {
  // turn light on then delay before next light
  digitalWrite(LED_BUILTIN, HIGH);
  delay(midInterval);

  digitalWrite(ledAlpha, HIGH);
  delay(fastInterval);

  digitalWrite(ledBeta, HIGH);
  delay(slowInterval);

  // turn all lights off at end of loop
  if (digitalRead(LED_BUILTIN, HIGH)) {
    digitalWrite(LED_BUILTIN, LOW);
  }

  if (digitalRead(ledAlpha, HIGH)) {
    digitalWrite(ledAlpha, LOW);
  }

  if (digitalRead(ledBeta, HIGH)) {
    digitalWrite(ledBeta, LOW);
  }

}
