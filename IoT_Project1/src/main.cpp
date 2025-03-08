#include <Arduino.h>
int lampu = 26;
int lampu2 = 33;
void setup()
{
  Serial.begin(115200);
  Serial.println("ESP32 Blinking LED");
  pinMode(lampu, OUTPUT);
  pinMode(lampu2, OUTPUT);
}

void loop()
{
  digitalWrite(lampu, HIGH);
  digitalWrite(lampu2, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(lampu, LOW);
  digitalWrite(lampu2, LOW);
  Serial.println("LED OFF");
  delay(1000);
}