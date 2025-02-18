int display[] = {1,1,1,1,1,1,0};//the actual display that the pins draw from

int numbers[10][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
//all numbers stored in a 2d array
//extract numbers from here - different case scenarios

int num=0; //the number in the array to use

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);//updating the display
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
 //setup
  digitalWrite(2,display[0]);
  digitalWrite(3,display[1]);
  digitalWrite(4,display[2]);
  digitalWrite(5,display[3]);
  digitalWrite(6,display[4]);
  digitalWrite(7,display[5]);
  digitalWrite(8,display[6]);
  Serial.begin(9600);
  //setup for start - zero
}

void update(){   //full display update
  for (int i = 0; i < 7; i++) {
    display[i] = numbers[num][i];
  }
  for(int i=0; i<7; i++){
    digitalWrite(i+2,display[i]);
  }
}

void up(){
  num+=1;

  if(num>9){
    num=9;
  }
  update();
}

void down(){
  num-=1;

  if(num<0){
    num=0;
  }
  update();
}

void loop() {

  if(digitalRead(9)==LOW){
    up();
    delay(250);  //no debounce
  }

  if(digitalRead(10)==LOW){
    down();
    delay(250);
  }
}