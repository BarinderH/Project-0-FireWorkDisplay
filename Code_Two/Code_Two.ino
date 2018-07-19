// Code for the arduino that will be recieving all the commands and executing them as need. 
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);  // RX, TX on the Board
const int SignalPin =  13;      // Sets up the signal pin to be 13 to start the display 
const int LED =  12;            // This will set the indicator LED to be 12, The indicator LED is to make sure the signal is work before lauching it 
const int interrupt = 4;        // This will set up the interupt signal to be pin 4

void setup() {
  Serial.begin(9600);           // To be able to read what values are coming in on the serial monitor 
  mySerial.begin(9600);         // Allows the system to be able to understand what is being sent to the serial monitor 
   pinMode(SignalPin, OUTPUT);  // Sets up the pin mode
   pinMode(LED, OUTPUT);
   pinMode(interrupt, OUTPUT);
   digitalWrite(interrupt, LOW); // Before starting the loop all the signal pins are set to low 
   digitalWrite(SignalPin, LOW);
   
}

void loop() {
  
  if(mySerial.available() > 1){
    int input = mySerial.parseInt();    // Read serial input and convert to integer (-32,768 to 32,767)
    Serial.println(input);              // Prints out the whatever is being sent to it
    
    if(input == 12){                   // If we sent a "12" then it will turn the LED on wirelessly this is to test that the connection is work
      digitalWrite(LED, HIGH);
    }
     if(input == 13){                  // Will turn the signal LED off (not a nessaciry part) 
      digitalWrite(LED, LOW);
    }
    if ( input == 1)                  // This will turn the display on
      { 
            digitalWrite(SignalPin, HIGH);
       }

    if ( input == 2)                  // This will turn the display off
        {
            digitalWrite(SignalPin, LOW);
         }
    while (input == 3)               // This is for an emegncy stop (Safetly Feature) 
    {
      digitalWrite(interrupt, HIGH);
      delay(100000); // Need to find a better solution
    }
    
}
mySerial.flush();  //Clear the serial buffer for unwanted inputs     
  
  delay(10);  //Delay for 10milisecond a for better serial communication
}
