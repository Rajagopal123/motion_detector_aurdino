int pirdata=15;
int led=14;
int pirstate=LOW;
int value=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  pinMode(pirdata,INPUT);
}

void loop() {
  value=digitalRead(pirdata);
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  if (value==HIGH){
    digitalWrite(led, HIGH);
    if (pirstate==LOW){
      Serial.println("motion detected....");
      pirstate=HIGH;
    }
  }
  else{
      digitalWrite(led, LOW);
      if (pirstate==HIGH){
        Serial.println("no motion ....");
        pirstate=LOW;
      }
  }
  
}
