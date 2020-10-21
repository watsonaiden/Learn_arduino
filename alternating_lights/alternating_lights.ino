int switchState = 0;
int offset = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  
  if(switchState == 1){
    for(int i =0; i<3; i++){
      digitalWrite(i+3, (offset == i));
      
    }
    offset += 1;
    offset = offset % 3;
    delay( );
  }
  

  
  // put your main code here, to run repeatedly:

}
