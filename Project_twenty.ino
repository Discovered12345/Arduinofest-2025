#define A 8
#define B 9
#define C 10
#define D 11

#define NUMBER_OF_STEPS_PER_REV 512

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
}

void write(int a, int b, int c, int d) {
  digitalWrite(A, a*2);
  digitalWrite(B, b*2);
  digitalWrite(C, c*2);
  digitalWrite(D, d*2);

}
void onestep() {

  if (digitalRead(2) == HIGH) {
    write(0,0,0,1);
    delay(5);
    write(0,0,1,0);
    delay(5);
    write(0,1,0,0);
    delay(5);
    write(1, 0, 0, 0);
    delay(5);
  }
 else {
    write(1,0,0,0);
    delay(5);
    write(0,1,0,0);
    delay(5);
    write(0,0,1,0);
    delay(5);
    write(0, 0, 0, 1);
    delay(5);

 }
  
 if (digitalRead(4) == HIGH) {
    write(0,0,0,1);
    write(0,0,1,0);
    write(0,1,0,0);
    write(1, 0, 0, 0);
 }
 else {
    write(1,0,0,0);
    write(0,1,0,0);
    write(0,0,1,0);
    write(0, 0, 0, 1);

 }
}

void loop() {
  onestep();
}
