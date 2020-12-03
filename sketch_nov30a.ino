const int buttonPin = 4;

const int ledPin    = 11;
const int ledPin1   = 12;
const int ledPin2   = 13;

int initial     = 0;
int oldstate    = 0;
int buttonstate = 0;
int ON=HIGH;

void setup() {

 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin1, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(buttonPin, INPUT);
 
}

void loop() {
  buttonstate = digitalRead(buttonPin);
  if(buttonstate == HIGH)
{
  delay(50);
  buttonstate = digitalRead(buttonPin);
  if(buttonstate == LOW)
  {
    initial = oldstate+1;
  }
} else {
  delay(100);   
  }
  switch (initial){
   case 1:
   digitalWrite(ledPin, HIGH);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, LOW);
//   Serial.print("Light 1 is ON");
//   Serial.println("light 2 is ON");
   oldstate = initial;
   break;
   case 2:
   digitalWrite(ledPin, LOW);
   digitalWrite(ledPin1, HIGH);
   digitalWrite(ledPin2, LOW);
//   Serial.print("Light 1 is ON");
//   Serial.println("light 2 is ON");
   oldstate = initial;
   break;
   case 3:
   digitalWrite(ledPin, LOW);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, HIGH);
//   Serial.print("Light 1 is ON");
//   Serial.println("light 2 is ON");
   oldstate = initial;
   break;
   default:
   digitalWrite(ledPin, LOW);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, LOW);
   oldstate = 0;
   break;
  }
}
