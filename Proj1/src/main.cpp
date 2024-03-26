#include <Arduino.h>

int led1 = D0;
int led2 = D1;
int led3 = LED_BUILTIN;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led3, LOW);
  digitalWrite(led1, HIGH);
  delay(5000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
}