//Code for sending commands wirelessely
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); //RX, TX


void setup() {
  mySerial.begin(9600);
}

void loop() {
    mySerial.println("12"); // 12 will test the wireless connection turn green LED on
                           // 13 will turn LED off green LED
                           // 1 will turn MEGA on (Firework display)
                           // 2 will turn MEGA off (Firework display)
                           // 3 will turn the interrupt on
  delay(10);
}


