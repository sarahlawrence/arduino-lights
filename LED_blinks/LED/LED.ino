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
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(ledAlpha, HIGH);
  digitalWrite(ledBeta, LOW);
  delay(100);

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(ledAlpha, LOW);
  digitalWrite(ledBeta, HIGH);
  delay(100);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(ledAlpha, HIGH);
  digitalWrite(ledBeta, HIGH);
  delay(100);

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(ledAlpha, LOW);
  digitalWrite(ledBeta, LOW);
  delay(100);
  
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(ledAlpha, LOW);
  digitalWrite(ledBeta, HIGH);
  delay(100);
}
