boolean a;
boolean b;
const int red=5;
const int blue=6;
const int green=9;

void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(2);
b=digitalRead(3);
if ((a==HIGH && b==HIGH)||(a==HIGH || b==HIGH)){
digitalWrite(red,HIGH);
digitalWrite(blue,LOW);
}
else{
 digitalWrite(blue,HIGH);
 digitalWrite(red,LOW);
}
}
