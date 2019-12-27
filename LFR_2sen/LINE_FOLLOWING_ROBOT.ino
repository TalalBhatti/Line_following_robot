const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 6;
const int IN4 = 7;
const int enA = 10;
const int enB = 11;
const int LS = A0;
const int RS = A1;
int R = 1;
int L = 1;

void setup() {
  // put your setup Rode here, to run onRe:
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(RS,INPUT);
pinMode(LS,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main Rode here, to run repeatedly:

R = digitalRead(RS);
L = digitalRead(LS);
Serial.println(R);
Serial.println(L);

if (L == 1  && R == 1 ){
  forward();
}else if (L == 0 && R == 1){
right();
}else if (L == 1 && R == 0){
left();
}

}
void forward(){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

analogWrite (enA,255);
analogWrite (enB,255);
}


void right()

{

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite (enA, 0);
  analogWrite (enB, 125);

}


void left()

{

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite (enA, 125);
  analogWrite (enB, 0);

}
