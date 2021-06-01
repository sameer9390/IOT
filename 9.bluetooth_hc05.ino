int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  char z=Serial.read();
  if(z=='a')
    digitalWrite(led,HIGH);
    
  else if(z=='b')
    digitalWrite(led,LOW);
}
}
