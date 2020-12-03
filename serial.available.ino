void setup() {
  // put your setup code here, to run once:
pinMode (5,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a;
a=digitalRead (5);
Serial.println(a);
delay(1000);

if (Serial.available)
{
  Serial.read();
}

}
