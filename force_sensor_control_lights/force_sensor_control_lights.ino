int sensorPin = 0;
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;
int ledPin4 = 12;
int ledPin5 = 13;
int sensorValue= 0;

  
void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
sensorValue = analogRead(sensorPin);
Serial.print("Force value = ");
Serial.println(sensorValue);

if(sensorValue > 1020){     
    digitalWrite(ledPin1, HIGH);
  }else digitalWrite(ledPin1, LOW);   
  
  if(sensorValue > 990){  
    digitalWrite(ledPin2, HIGH);  
  }else digitalWrite(ledPin2, LOW);     
  
  if(sensorValue > 956){
    digitalWrite(ledPin3, HIGH);
  }else digitalWrite(ledPin3, LOW);
  
   if(sensorValue > 923){     
    digitalWrite(ledPin4, HIGH);
  }else digitalWrite(ledPin4, LOW);   
  
  if(sensorValue > 890){     
    digitalWrite(ledPin5, HIGH);
  }else digitalWrite(ledPin5, LOW);   
}
  
