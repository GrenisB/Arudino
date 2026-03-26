int LedR = 8;
int LedG = 7;
int LedV = 6;

void setup(){
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedV, OUTPUT);
}

void loop(){
  digitalWrite(LedV, HIGH);
  delay(3000);
  digitalWrite(LedV, LOW);
  digitalWrite(LedG, HIGH);
  delay(1500);
  digitalWrite(LedG, LOW);
  digitalWrite(LedR, HIGH);
  delay(4500);
  digitalWrite(LedR, LOW);
}
