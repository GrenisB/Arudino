int LedR = 4;
int Pulsante = 2.;
bool stato = LOW;

void setup(){
  pinMode(LedR, OUTPUT);
  pinMode(Pulsante, INPUT_PULLUP);
}

void loop(){
  while(stato != HIGH){
    digitalWrite(LedR, HIGH);
  }
  digitalWrite(LedR, LOW);
}
