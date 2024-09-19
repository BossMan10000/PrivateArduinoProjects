
int LEDPIN1 = 53;
int LEDPIN2 = 52;
int LEDPIN3 = 51;
int BUTTONPIN1 = 50;
int BUTTONPIN2 = 48;
int BlinkSpeed = 100;

void setup() {
  // put your setup code here, to run once:

pinMode(LEDPIN1, OUTPUT);
pinMode(LEDPIN2, OUTPUT);
pinMode(LEDPIN3, OUTPUT);
pinMode(BUTTONPIN1, INPUT);
pinMode( BUTTONPIN1,INPUT);

Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:



if(digitalRead(BUTTONPIN1) ==  HIGH ){
  delay(BlinkSpeed);
  digitalWrite(LEDPIN1,HIGH);
  delay(BlinkSpeed);
  digitalWrite(LEDPIN2,HIGH);
  delay(BlinkSpeed);
  digitalWrite(LEDPIN3,HIGH);
  delay(BlinkSpeed);
  digitalWrite(LEDPIN1,LOW);
  delay(BlinkSpeed);
  digitalWrite(LEDPIN2,LOW);
  delay(BlinkSpeed);
  digitalWrite(LEDPIN3,LOW);
  delay(BlinkSpeed);
  }
  else {
  digitalWrite(LEDPIN1,LOW);
  digitalWrite(LEDPIN2,LOW);
  digitalWrite(LEDPIN3,LOW);


  }

 if(digitalRead(BUTTONPIN1) ==  LOW && digitalRead(BUTTONPIN2) ==  LOW ){
  digitalWrite(LEDPIN1,HIGH);
  digitalWrite(LEDPIN2,HIGH);
  digitalWrite(LEDPIN3,HIGH);
 }
else {
  digitalWrite(LEDPIN1,LOW);
  digitalWrite(LEDPIN2,LOW);
  digitalWrite(LEDPIN3,LOW);

}

}






 



 

