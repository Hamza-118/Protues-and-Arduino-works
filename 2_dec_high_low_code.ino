bool a;
void setup () {
  pinMode(5,INPUT);
  Serial.begin(9600);
}
void loop() {
  a=digitalRead(2);
  if (a==HIGH){
    Serial.println("1");
  }
  else if (a==LOW){
 Serial.println("0");
  }
 delay(2000);
}

