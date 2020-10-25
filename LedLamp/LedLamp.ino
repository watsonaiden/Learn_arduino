const int greenPin = 9;
const int redPin = 10;
const int bluePin = 11;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int values[3] = {0,0,0};
  for(int i=0; i<3; i++){
    values[i] = analogRead(i)/4;
    delay(5);
    analogWrite(i+9, values[i]);
  }
  

}
