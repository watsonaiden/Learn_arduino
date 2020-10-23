const int sensorPin = A0;
const int baselineTemp = 18;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i =2; i<5; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, 0);
  }
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);

  float voltage  = (sensorVal/1024.0) * 5.0;
  
  float temperature = (voltage - .5)*100;
  
  if(temperature > baselineTemp){
    Serial.print("temp");
    Serial.print(temperature);
     for(int i =2; i<5; i++){
    digitalWrite(i, 1);
    }
  }
  else{
     for(int i =2; i<5; i++){
    digitalWrite(i, 0);
    }
  }
}
