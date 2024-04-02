//https://majsterkowo.pl/arduino-sterowanie-za-pomoca-odbiornika-podczerwieni-ir-36khz-i-38khz-i-pilota-od-telewizora/

#include <IRremote.h>
IRsend irsend;

void setup(){}
void loop() 
{
  
byte dane = random(1,10);
  irsend.sendSony(dane, 18); // Wysyła wylosowaną liczbę w przedziale od 1 do 10
delay(2500);
}