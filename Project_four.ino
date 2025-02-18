//resistance
int resistance;
int midpoint = 512;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  Serial.print(resistance);
  resistance = analogRead(A0);
  if (analogRead(A0) < 675){
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(6, LOW);
    delay(50);

  }
  else {
    digitalWrite(6, LOW);
  }
  }