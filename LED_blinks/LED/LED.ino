const int ledAlpha = 13;
const int ledBravo = 3;
const int ledCharlie = 6;

const int slowInterval = 500;
const int midInterval = 250;
const int fastInterval = 100;

int ledArray[3] = {ledAlpha, ledBravo, ledCharlie};
int delayArray[3] = {slowInterval, midInterval, fastInterval};

void setup() {
  pinMode(ledAlpha, OUTPUT);
  pinMode(ledBravo, OUTPUT);
  pinMode(ledCharlie, OUTPUT);
}

void loop() {

  // choose an LED at random
  int randomLED = rand() % 3;
  int selectedLED = ledArray[randomLED];

  // choose a random delay amount
  int randomDelay = rand() % 3;
  int selectedDelay = delayArray[randomLED];


  // turn on selected LED for selected delay
  digitalWrite(selectedLED, HIGH);
  delay(selectedDelay);



  // turn all lights off at end of loop
  digitalWrite(ledAlpha, LOW);
  digitalWrite(ledBravo, LOW);
  digitalWrite(ledCharlie, LOW);

}
