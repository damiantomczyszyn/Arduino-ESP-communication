//https://starter-kit.nettigo.pl/2017/03/sterownie-arduino-pomoca-pilota-tv/

#include <IRremote.h>

const int receiverPin = 11;

IRrecv irrecv(receiverPin);
decode_results results;
 
void setup() {
  irrecv.enableIRIn();
}
 
void loop() {
  if(irrecv.decode(&results)) {
    Serial.print("0x");
    Serial.println(results.value, HEX);
    delay(250);
    irrecv.resume();
  }
}