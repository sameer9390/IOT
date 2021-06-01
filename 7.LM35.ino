int sens=A5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(sens);
float z=(x*5*100)/1023; 

Serial.println(z );
delay(100);

}
