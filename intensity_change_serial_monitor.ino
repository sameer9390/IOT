int led=9;
String s;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  char z= Serial.read();
  s=z;
  int k=s.toInt();
  k=k*25;
  

  analogWrite(led,k);
}
}
