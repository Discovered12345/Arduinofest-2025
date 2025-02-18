int xvalue = 0;
int yvalue = 0;
int ledxNeg;
int ledxPos;
int ledyNeg;
int ledyPos;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}


void loop() {

  xvalue = analogRead(A0);
  yvalue = analogRead(A1);
  ledxPos = (xvalue - 512)/2;
  ledyPos = (yvalue - 512)/2;
  ledxNeg = (512 - xvalue)/2;
  ledyNeg = (512 - yvalue)/2;

  Serial.print(xvalue);
  Serial.print(yvalue);
  //push button - turn on lights
  if (digitalRead(2) == LOW){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  //release button - no lights turned on
  else{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }

  if (yvalue > 540){
    analogWrite(4, ledyPos);
  }
  else{
    analogWrite(4,0);
  }

  if (yvalue < 500){
    analogWrite(6, ledyNeg/2);
  }
  else{
    analogWrite(6, 0);
  }

  if(xvalue > 540){
    analogWrite(3, ledyPos/2);
  }
  else{
    analogWrite(3, 0);
  }
  
  if(xvalue < 500){
    analogWrite(5, ledyNeg/2);
  }
  else{
    analogWrite(5, 0);
  }
}