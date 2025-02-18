void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
}
void note(int frequency, int beats){
  tone(2, frequency);
  delay(beats);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == LOW){
    note(523,1);
  }
  else if(digitalRead(4) == LOW){
    note(554,4);
  }
  else if (digitalRead(5) == LOW){
    note(622,3);
  }
  else{
    noTone(2);
  }
}