#include <IRremote.h> 
#include <SoftwareSerial.h> 
// IR sensor setup
const int IRPin = 2; // IR sensor connected to digital pin 2
IRrecv irrecv(IRPin); 
decode_results results;
// XBee setup using software serial
SoftwareSerial XBee(10, 11); // RX, TX 
void setup() 
{
 Serial.begin(9600); 
XBee.begin(9600); 
 irrecv.enableIRIn(); // Start the IR receiver
}
void loop() 
{
 // Check if the IR sensor has received data
 if (irrecv.decode(&results))
{
 // Send the received IR data over XBee
 XBee.println(results.value, HEX); 
Serial.println(results.value, HEX); 
 irrecv.resume(); // Receive the next IR signal.
 }
}
