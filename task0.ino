#include <Servo.h>

int out1 = 12;
int out2 = 13;
int out3 = 14;

int in1 = 4;
int in2 = 5;
int in3 = 6;

int rd1, rd2, rd3;

void setup()
{
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);

  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
}

void loop()
{
  rd1 = digitalRead(in1);
  rd2 = digitalRead(in2);
  rd3 = digitalRead(in3);

  if (rd1 == HIGH)
  {
    digitalWrite(out1, LOW);
  }
  else
  {
    digitalWrite(out1, HIGH);
  }

  if (rd2 == HIGH)
  {
    digitalWrite(out2, LOW);
  }
  else
  {
    digitalWrite(out2, HIGH);
  }

  if (rd3 == HIGH)
  {
    digitalWrite(out3, LOW);
  }
  else
  {
    digitalWrite(out3, HIGH);
  }
}

