// C++ code
//
int analog_pin=A0;
int digital_pin=7;
void setup()
{
  Serial.begin(9600);
  pinMode(digital_pin, OUTPUT);
}

void loop()
{
  int sensor_mode=analogRead(analog_pin);
  float tempc=sensor_mode*(5.0/1023.0)*100.0;
  Serial.print("Temperature");
  Serial.print(tempc);
  Serial.println("c");
  if(tempc > 30){
    digitalWrite(digital_pin,HIGH);
  }
  else{
    digitalWrite(digital_pin,LOW);
  }
  delay(1000);
    
     
}