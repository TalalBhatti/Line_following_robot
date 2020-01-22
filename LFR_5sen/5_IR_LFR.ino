void setup() {
// put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);   //sensors pin
pinMode(5, INPUT);
pinMode(6, INPUT);

pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);     //motor driver
pinMode(12, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

analogWrite(10, 120);     //speed
analogWrite(11, 120);

}

void loop() {

int L= digitalRead(2); //sensor 1
int AL= digitalRead(3); //sensor 2 
int M= digitalRead(4); //sensor 3
int AR= digitalRead(5); //sensor 4 
int R= digitalRead(6); //sensor 5

if (L==HIGH && AL==HIGH && M==LOW && AR==HIGH && R==HIGH)

{
  analogWrite(10, 60);
analogWrite(11, 60);
digitalWrite(8, HIGH); //motor 2
digitalWrite(7, LOW); //FORWARD
digitalWrite(9, HIGH); //motor 2
digitalWrite(12, LOW);

}

else if(L==HIGH && AL==HIGH && M==HIGH && AR==LOW && R==HIGH)

{
analogWrite(10, 70);
analogWrite(11, 70);
digitalWrite(8, LOW); //motor 2
digitalWrite(7, HIGH); //RIGHT
digitalWrite(9, HIGH); //motor 2
digitalWrite(12, LOW); 
}

else if(L==HIGH && AL==HIGH && M==LOW && AR==LOW && R==HIGH)

{
analogWrite(10, 70);
analogWrite(11, 70);
digitalWrite(8, LOW); //motor 2
digitalWrite(7, HIGH); //RIGHT
digitalWrite(9, HIGH); //motor 2
digitalWrite(12, LOW);
}

else if(L==HIGH && AL==HIGH && M==HIGH && AR==LOW && R==LOW)

{

digitalWrite(8, LOW); //motor 2
digitalWrite(7, HIGH); //RIGHT
digitalWrite(9, HIGH); //motor 2
digitalWrite(12, LOW);
}

else if(L==HIGH && AL==LOW && M==HIGH && AR==HIGH && R==HIGH)

{

digitalWrite(8, HIGH); //motor 2
digitalWrite(7, LOW); //LEFT
digitalWrite(9, LOW); //motor 2
digitalWrite(12, HIGH);
}

else if(L==HIGH && AL==LOW && M==LOW && AR==HIGH && R==HIGH)

{

digitalWrite(8, HIGH); //motor 2
digitalWrite(7, LOW); //LEFT
digitalWrite(9, LOW); //motor 2
digitalWrite(12, HIGH);
}

else if(L==LOW && AL==LOW && M==HIGH && AR==HIGH && R==HIGH)

{

digitalWrite(8, HIGH); //motor 2
digitalWrite(7, LOW); //RIGHT
digitalWrite(9, LOW); //motor 2
digitalWrite(12, HIGH);
}

else if(L==LOW && AL==LOW && M==HIGH && AR==LOW && R==LOW)

{

digitalWrite(8, LOW); //motor 2
digitalWrite(7, LOW); //RIGHT
digitalWrite(9, LOW); //motor 2
digitalWrite(12, LOW);
}

else if(L==HIGH && AL==HIGH && M==HIGH && AR==HIGH && R==HIGH)

{

digitalWrite(8, LOW); //motor 2
digitalWrite(7, HIGH); //RIGHT
digitalWrite(9, HIGH); //motor 2
digitalWrite(12, LOW);
}
else if(L==LOW && AL==LOW && M==LOW && AR==LOW && R==LOW)

{

digitalWrite(8, LOW); //motor 2
digitalWrite(7, LOW); //STOP
digitalWrite(9, LOW); //motor 2
digitalWrite(12, LOW);
}
else
{
analogWrite(10, 60);
analogWrite(11, 60);  
digitalWrite(8, HIGH); //motor 1
digitalWrite(7, LOW); //STOP
digitalWrite(9, HIGH ); //motor 2
digitalWrite(12, LOW);
}

}
