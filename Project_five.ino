//pentionometer
int red;
int green;
int blue;
void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(9, OUTPUT); // red
  pinMode(10, OUTPUT); // green
  pinMode(11, OUTPUT); // blue
}
void loop() {
blue = analogRead(A0);
blue = blue/4;
red = 255-blue;
analogWrite(9, red);
analogWrite(11, blue);
  }

