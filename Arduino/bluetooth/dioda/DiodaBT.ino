
int ledPin=13; 
char c;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    c = Serial.read();
  }
  if(c == '1'){
    digitalWrite(ledPin, HIGH);

  }
  else if (c == '0'){
    digitalWrite(ledPin, LOW);

  }
}
