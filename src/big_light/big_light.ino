/*
      __7__
      |   | 6
    9 |_5_|
      |   | 4
    1 |___|
        2

pos10 = dot


*/



const int pos1 = 2;
const int pos2 = 3;
const int pos4 = 4;
const int pos5 = 5;
const int pos6 = 6;
const int pos7 = 7;
const int pos9 = 8;
const int dot = 9;

const int counter = 0;

void setup() {
  pinMode(pos1, OUTPUT);
  pinMode(pos2, OUTPUT);
  pinMode(pos4, OUTPUT);
  pinMode(pos5, OUTPUT);
  pinMode(pos6, OUTPUT);
  pinMode(pos7, OUTPUT);
  pinMode(pos9, OUTPUT);
  pinMode(dot, OUTPUT);
}

void loop() {
  zero();
  delay(500);
  turnOff();
  one();
  delay(500);
  turnOff();
  two();
  delay(500);
  turnOff();
  three();
  delay(500);
  turnOff();
  four();
  delay(500);
  turnOff();
  five();
  delay(500);
  turnOff();
  six();
  delay(500);
  turnOff();
  seven();
  delay(500);
  turnOff();
  eight();
  delay(500);
  turnOff();
  nine();
  delay(500);
  turnOff();
}

void turnOff() {
  digitalWrite(pos1, LOW);
  digitalWrite(pos2, LOW);
  digitalWrite(pos4, LOW);
  digitalWrite(pos5, LOW);
  digitalWrite(pos6, LOW);
  digitalWrite(pos7, LOW);
  digitalWrite(pos9, LOW);

}

void zero() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos4, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos7, HIGH);
  digitalWrite(pos9, HIGH);
}

void one() {
  digitalWrite(pos4, HIGH);
  digitalWrite(pos6, HIGH);
}

void two() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos7, HIGH);
}

void three() {
  digitalWrite(pos2, HIGH);
  digitalWrite(pos4, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos7, HIGH);
}

void four() {
  digitalWrite(pos4, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos9, HIGH);
}

void five() {
  digitalWrite(pos2, HIGH);
  digitalWrite(pos4, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos7, HIGH);
  digitalWrite(pos9, HIGH);
}

void six() {
  digitalWrite(pos1, HIGH);
  five();
}

void seven() {
  one();
  digitalWrite(pos7, HIGH);
}

void eight() {
  six();
  digitalWrite(pos6, HIGH);
}

void nine() {
  eight();
  digitalWrite(pos1, LOW);
}
