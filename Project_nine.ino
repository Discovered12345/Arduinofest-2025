#include <DHT11.h> //libraries for sensor functionality
#include "StopwatchLib.h" //libraries for measuring elapsed time
Stopwatch stop; //stowatch object
int temperature; //raw temp reading
float time;  //elapsed time in seconds
int temp2; //temporary variable
int humidity;  //humidity level variable
int result;   //dht11 sensor reading

DHT11 dht11(2);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  stop.Update(); //update the stowatch
  time = stop.GetElapsed(); 
  time = time/1000000;  //convert to microseconds
  temperature = 0;  //reset
  temp2 = 0; //reset
  humidity = 0; //reset
  result=0;   //reset
  result=dht11.readTemperatureHumidity(temperature, humidity);    //read and store the values
  temp2 = temperature;     

  //FORMULAAAA
  //°F = °C × (9/5) + 32
            
  temperature=temperature*9; //covertion
  temperature=temperature/5; //convertion
  temperature=temperature+32; //convertion
  if (temp2%10==0)
  {
    Serial.print(temp2);
    Serial.print(" °Celsius Reached!!! :))");
    Serial.println("");
    Serial.println("");
  }
  if (result==0){
    Serial.print("Temperature is in farenheight: ");
    Serial.print(temperature);
    Serial.print(" °F\t Temperature is in celsius: ");
    Serial.print(temp2);
    Serial.print(" °C\t Humidity is: ");
    Serial.print(humidity);
    Serial.print("%\t");
    Serial.print("Time is: ");
    Serial.print(time);
    Serial.print(" seconds");
    Serial.println("");
    Serial.println("");
  }
}
