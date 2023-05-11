#include <Servo.h>



int out = 12;
int in = 4;

int rd;

void setup()

{

pinMode(out,OUTPUT);

pinMode(in,INPUT);

}

void loop()

{

rd=digitalRead(in);

if(rd==HIGH)

{

digitalWrite(out,LOW);

delay(100);

}

else

{

digitalWrite(out,HIGH);

delay(100);

}

}
