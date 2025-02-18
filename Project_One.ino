void setup() {
  pinMode(2, OUTPUT);
}
void spacingWords(){
  digitalWrite(2,LOW);
  delay(350);
}
void spacing(){
  digitalWrite(2,LOW);
  delay(50);
}
void spacingLetters(){
  digitalWrite(2,LOW);
  delay(150);
}
void lowerLetters(){
  digitalWrite(2,HIGH);
  delay(50);
  digitalWrite(2,LOW);
  delay(50);
}
void upperLetters(){
  digitalWrite(2,HIGH);
  delay(150);
  digitalWrite(2,LOW);
  delay(50);
}
void loop() {
  //A:
  lowerLetters();
  spacing();
  upperLetters();
  spacingLetters();
  //N:
  upperLetters();
  spacing();
  lowerLetters();
  spacingLetters();
  //D
  upperLetters();
  spacing();
  lowerLetters();
  spacing();
  lowerLetters();
  spacingLetters();
  //R
  lowerLetters();
  spacing();
  upperLetters();
  spacing();
  lowerLetters();
  spacing();
  spacingLetters();
  //E
  lowerLetters();
  spacingLetters();
  //W
  lowerLetters();
  spacing();
  upperLetters();
  spacing();
  upperLetters();
  spacingWords();
  //M
  upperLetters();
  spacing();
  upperLetters();
  spacingLetters();
  //A
  lowerLetters();
  spacing();
  upperLetters();
  spacingWords();
}
