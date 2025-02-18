int previousState = LOW;
int counter;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(5) == HIGH){
    digitalWrite(2, LOW);
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
    digitalWrite(2, HIGH);
  }
}
  