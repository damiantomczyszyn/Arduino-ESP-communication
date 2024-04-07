#include <IRremote.h>
//biblioteka musi dla tego kodu byś w starej wersji 2.6.0, a obecnie jest już 4.0.0

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;



void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
}