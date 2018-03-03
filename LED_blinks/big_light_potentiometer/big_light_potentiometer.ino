/*
      __2__
      |   | 3
    8 |_9_|
      |   | 4
    6 |___|
        5

posA0 = dot

*/

int potPin = 2;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the sensor

const int posA = 2;
const int posB = 3;
const int posC = 4;
const int posD = 5;
const int posE = 6;
const int posF = 8;
const int posG = 9;
// const int dot = 9;

void setup() {
  pinMode(posA, OUTPUT);
  pinMode(posB, OUTPUT);
  pinMode(posC, OUTPUT);
  pinMode(posD, OUTPUT);
  pinMode(posE, OUTPUT);
  pinMode(posF, OUTPUT);
  pinMode(posG, OUTPUT);
  // pinMode(dot, OUTPUT);
}

void loop() {
  turnOff();
  val = analogRead(potPin);
  val = 9 * (val / 1023);
  switch (val) {
    case 1:
      one();
      break;
    case 2:
      two();
      break;
    case 3:
      three();
      break;
    case 4:
      four();
      break;
    case 5:
      five();
      break;
    case 6:
      six();
      break;
    case 7:
      seven();
      break;
    case 8:
      eight();
      break;
    case 9:
      nine();
      break;
    default:
      zero();
  }
}

void turnOff() {
  digitalWrite(posA, LOW);
  digitalWrite(posB, LOW);
  digitalWrite(posC, LOW);
  digitalWrite(posD, LOW);
  digitalWrite(posE, LOW);
  digitalWrite(posF, LOW);
  digitalWrite(posG, LOW);

}

void zero() {
  digitalWrite(posA, HIGH);
  digitalWrite(posB, HIGH);
  digitalWrite(posC, HIGH);
  digitalWrite(posD, HIGH);
  digitalWrite(posE, HIGH);
  digitalWrite(posF, HIGH);
}

void one() {
  digitalWrite(posB, HIGH);
  digitalWrite(posC, HIGH);
}

void two() {
  digitalWrite(posA, HIGH);
  digitalWrite(posB, HIGH);
  digitalWrite(posD, HIGH);
  digitalWrite(posE, HIGH);
  digitalWrite(posG, HIGH);
}

void three() {
  digitalWrite(posA, HIGH);
  digitalWrite(posB, HIGH);
  digitalWrite(posC, HIGH);
  digitalWrite(posD, HIGH);
  digitalWrite(posG, HIGH);
}

void four() {
  digitalWrite(posC, HIGH);
  digitalWrite(posD, HIGH);
  digitalWrite(posE, HIGH);
  digitalWrite(posG, HIGH);
}

void five() {
  digitalWrite(posB, HIGH);
  digitalWrite(posC, HIGH);
  digitalWrite(posD, HIGH);
  digitalWrite(posF, HIGH);
  digitalWrite(posG, HIGH);
}

void six() {
  digitalWrite(posA, HIGH);
  five();
}

void seven() {
  one();
  digitalWrite(posF, HIGH);
}

void eight() {
  six();
  digitalWrite(posE, HIGH);
}

void nine() {
  eight();
  digitalWrite(posA, LOW);
}
