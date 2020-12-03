bool a;
void setup() {
  // put your setup code here, to run once:
pinMode (2,INPUT);
Serial.begin(9600);

}

void loop() 
{ 
  if(Serial.available()){
  char x= Serial.read();
  Serial.println(x); }
  delay (1000);
}
