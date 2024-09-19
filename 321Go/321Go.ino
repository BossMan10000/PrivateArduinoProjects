int LEDRED = 53;
int LEDYELLOW = 51;
int LEDGREEN = 49;
int BUZZ = 47;
int BUTTONPIN = 45;
int delaySpeed =500;
int delayEnd = 1000;
int POTPIN =A0; 
int volume ;


void setup () {
  // put your setup code here, to run once:
pinMode(LEDRED,OUTPUT);
pinMode(LEDYELLOW,OUTPUT);
pinMode(LEDGREEN,OUTPUT);
pinMode(BUZZ,OUTPUT);
pinMode(BUTTONPIN,INPUT);
Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:





if(digitalRead(BUTTONPIN) == LOW) {
 delay(delaySpeed);
 tone(BUZZ,441);
 Serial.println("3");
digitalWrite(LEDRED,HIGH);
delay(delaySpeed);
noTone(BUZZ);
delay(delaySpeed);
 tone(BUZZ,441);
  Serial.println("2");
digitalWrite(LEDYELLOW,HIGH);
delay(delaySpeed);
noTone(BUZZ);
delay(delaySpeed);
tone(BUZZ,441);
 Serial.println("1");
digitalWrite(LEDGREEN,HIGH);
delay(delaySpeed);
noTone(BUZZ);
delay(delaySpeed);
tone(BUZZ,879);
 Serial.println("GO");
delay(delayEnd);

digitalWrite(LEDRED,LOW);
digitalWrite(LEDYELLOW,LOW);
digitalWrite(LEDGREEN, LOW);
noTone(BUZZ);
}



else {
  digitalWrite(LEDRED,LOW);
  digitalWrite(LEDYELLOW,LOW);
  digitalWrite(LEDGREEN, LOW);
  noTone(BUZZ);
}





}








 



 

