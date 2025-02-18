void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //tilt ball switch
  pinMode(7, OUTPUT); //led
  pinMode(8, OUTPUT); //active buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW)
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  if (digitalRead(2) == HIGH){
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

}
