#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte topLeft[8] = { //bottom to top byte pixels on or off
  B11100,
  B11100,
  B11100,
  B11100,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte topRight[8] = { //bottom to top byte pixels on or off
  B00111,
  B00111,
  B00111,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte bottomLeft[8] = {  //bottom to top byte pixels on or off
  B00000,
  B00000,
  B00000,
  B00000,
  B11100,
  B11100,
  B11100,
  B11100,
};
byte bottomRight[8] = { //bottom to top byte pixels on or off
  B00000,
  B00000,
  B00000,
  B00000,
  B00111,
  B00111,
  B00111,
  B00111,
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); //16 columns two rows
  lcd.createChar(0, topLeft); //0-3
  lcd.createChar(1, topRight);
  lcd.createChar(2, bottomLeft);
  lcd.createChar(3, bottomRight);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(analogRead(A0) / 512, analogRead(A1) / 512);
  int xAxis = analogRead(A0) % 512 / 256; //moves cursor
  int yAxis = analogRead(A1) % 512 / 256; //moves cursor
  lcd.write(byte(yAxis * 2 + xAxis)); //corresponding character to lcd
  delay(100);
  lcd.clear();
}