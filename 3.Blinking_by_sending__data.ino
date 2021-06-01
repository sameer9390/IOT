  int  x=13;
  void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(x,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  char z=Serial.read();
  if(z=='a')
  {
    digitalWrite(x,HIGH);
  }
  else if(z=='b')
  {
    digitalWrite(x,LOW);
  }
}
}
