int  x=A2;
void setup() {

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(x);//sensor
  Serial.println(val);
  delay(2000);
  

}
