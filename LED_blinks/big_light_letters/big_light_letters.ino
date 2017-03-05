/*
      __7__
      |   | 6
    9 |_5_|
      |   | 4
    1 |___|
        2

pos10 = dot


*/

// hello

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
  h();
  delay(500);
  turnOff();
  delay(500);
  e();
  delay(500);
  turnOff();
  delay(500);
  l();
  delay(500);
  turnOff();
  delay(500);
  l();
  delay(500);
  turnOff();
  delay(500);
  o();
  delay(500);
  turnOff();
  delay(500);
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

void o() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos4, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos7, HIGH);
  digitalWrite(pos9, HIGH);
}

void h() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos4, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos6, HIGH);
  digitalWrite(pos9, HIGH);
}

void e() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos5, HIGH);
  digitalWrite(pos7, HIGH);
  digitalWrite(pos9, HIGH);
}

void l() {
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos9, HIGH);
}
