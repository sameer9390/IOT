int x=13;
void setup() {
  // put your setup code here, to run once:
pinMode(x,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(x,HIGH);
delay(3000);
digitalWrite(x,LOW);
delay(3000);   
}
