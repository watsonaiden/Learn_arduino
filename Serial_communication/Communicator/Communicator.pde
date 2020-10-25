import processing.serial.*;


Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port


void setup(){
  String portName = Serial.list()[0]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
}

void draw()
{
  if ( myPort.available() > 0) 
  {  // If data is available,
  String myString = myPort.readStringUntil('\n');
    if (myString != null) {
      println(myString); 
    }// read it and store it in val
  } 

}
