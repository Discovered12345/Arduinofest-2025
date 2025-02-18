long distance;
long readDistance(int trigPin, int echoPin)
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  return pulseIn(echoPin,HIGH);
}
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(13,INPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(readDistance(12, 13));
  distance=readDistance(12,13);
  if(distance>2500){
    noTone(11);
  }
  else if (distance!=0){
    tone(11,distance/2);
  }
}
