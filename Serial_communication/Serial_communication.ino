const int lightPin = 7;
int lightOn = 0;
byte buffer[1] = {0};
void setup() 
{
//initialize serial communications at a 9600 baud rate
Serial.begin(9600);
pinMode(lightPin, OUTPUT);
delay(2000);

}
void loop()
{
  delay(200);
  if(Serial.available() > 0){
    Serial.readBytes(buffer, 1);
    lightOn = (buffer[0]-'0');
    if(lightOn == 1){
       Serial.println(lightOn);
    }
    digitalWrite(lightPin, lightOn);
  }
  
//wait 100 milliseconds so we don't drive ourselves crazy

}
