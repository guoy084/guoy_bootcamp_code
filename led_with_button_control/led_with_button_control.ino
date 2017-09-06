int buttonPin = 7;
int ledPin = 13; 
boolean on = false;
int buttonState = 0;


void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    if(on == true){
      on = false;
      } else{
        on=true;
      }
  }

  if (on==true) {
    digitalWrite(ledPin, HIGH); 
  }
  else{
    digitalWrite(ledPin,LOW);
  }
delay(500);
}
