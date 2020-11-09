int sensorValue;
int sensorLow = 1023;
int sensorHigh=0;
const int ledPin = 13;

void setup() {
  pinMode(8, OUTPUT);
  while (millis() < 2000){
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if(sensorValue < sensorLow){
      sensorLow=sensorValue;
    }
  }
  // put your setup code here, to run once:

}

void loop() {
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue,sensorLow, sensorHigh, 50, 10000);

  tone(8, pitch, 20);
  delay(20);
  // put your main code here, to ru5n repeatedly:

}
