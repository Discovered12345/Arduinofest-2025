//p = potentiometer
int p;

int midpoint = 512;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  p = analogRead(A5);
  Serial.print("Variable_1 : ");
  Serial.print(p);
  Serial.print("Variable_2 : ");
  Serial.println(midpoint);
  if (p > 128){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
  if (p>384){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  if (p > 512){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
  if (p > 739){
    digitalWrite(5, HIGH);

  }
  else{
    digitalWrite(5, LOW);
  }
}
    