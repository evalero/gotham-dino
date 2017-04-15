int WHITE = 2;
int RED = 3;
//int BLUE = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (WHITE,OUTPUT);
  pinMode (RED,OUTPUT);
//  pinMode (BLUE,OUTPUT);
  digitalWrite(WHITE,LOW);
  digitalWrite(RED,LOW);
//  digitalWrite(BLUE,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
  //  digitalWrite(BLUE,HIGH);
  //  delay (1000);
  //  digitalWrite(BLUE,LOW);    
    char c = Serial.read();
    //digitalWrite(BLUE,HIGH);
    switch (c){
      case '1':
        scene1();
        Serial.println("FIN-1");
        break;
      case '2':
        scene2();
        Serial.println("FIN-2");
        delay(1000);
        break;
      default: 
        //RESET and do nothing
        digitalWrite(WHITE,HIGH);
        delay(10);
        digitalWrite(WHITE,LOW);
        digitalWrite(RED,HIGH);
        delay(10);
        digitalWrite(RED,LOW);
//        digitalWrite(BLUE,HIGH);
        delay (500);
//        digitalWrite(BLUE,LOW);
        Serial.println("FIN-DEFAULT");
    }
  }
}
void scene1() {
digitalWrite(WHITE,HIGH);
delay(15000);
digitalWrite(WHITE,LOW);
}

void scene2() {
digitalWrite(RED,HIGH);
delay (1500);
digitalWrite(RED,LOW);
delay (200);
digitalWrite(RED,HIGH);
delay (3000);
digitalWrite(RED,LOW);
delay(3000);
digitalWrite(RED,LOW);
}

