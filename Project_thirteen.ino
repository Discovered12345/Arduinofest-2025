int distance;
long read(int trigPin, int echoPin)
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  return pulseIn(echoPin,HIGH);
}
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
}

void loop() {
  distance = read(2,3);
  Serial.println(distance);
  if(distance > 2500){
    noTone(4);
  }
  else{
    tone(4,distance);
  }
}
