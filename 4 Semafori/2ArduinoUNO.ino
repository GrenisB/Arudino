int LedR = 13;
int LedG = 12;
int LedV = 11;

void setup(){
	pinMode(LedR,OUTPUT);
  	pinMode(LedG,OUTPUT);
  	pinMode(LedV,OUTPUT);
}

void loop(){
  digitalWrite(LedR,HIGH);
  delay(4500);
  digitalWrite(LedR,LOW);
  digitalWrite(LedV,HIGH);
  delay(3000);
  digitalWrite(LedV,LOW);
  digitalWrite(LedG,HIGH);
  delay(1500);
  digitalWrite(LedG,LOW);
}
