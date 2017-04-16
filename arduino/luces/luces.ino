int outMin = 8;
int outMax=13;

void setup() {
  for (int i=outMin; i<=outMax; i++){
    pinMode(i,OUTPUT);
  }
  randomSeed(analogRead(0));
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=outMin; i<=outMax; i++){
    digitalWrite(i,random(0,2));
  }
  delay(random(3000,6000));
  

}
