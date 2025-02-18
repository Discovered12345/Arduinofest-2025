#define ENABLE 5
#define DIRA 3
#define DIRB 4

int i;

void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(ENABLE, HIGH);

  if (digitalRead(8) == LOW) {
    if (digitalRead(7) == LOW) {
      digitalWrite(DIRA, HIGH);
      digitalWrite(DIRB, LOW);
    } else {
      digitalWrite(DIRB, HIGH);
      digitalWrite(DIRA, LOW);
    }
  } else {
    digitalWrite(ENABLE, LOW);
  }
}
