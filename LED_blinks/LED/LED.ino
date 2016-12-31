int redPin = 3;
int yellowPin = 6;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(redPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(redPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowPin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(redPin, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(redPin, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(redPin, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowPin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(redPin, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
}
