int sw=3;
int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led ,OUTPUT);
pinMode(sw,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(sw);
if(x==1 )
{ 
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}

}
