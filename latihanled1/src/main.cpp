#include <Arduino.h> // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
const int lampu_hijau = 25;  // LED Hijau di GPIO 25
const int lampu_kuning = 33; // LED Kuning di GPIO 33
const int lampu_merah = 27;  // LED Merah di GPIO 27

void setup()
{
  Serial.begin(115200);
  Serial.println("ESP32 Blinking LED Sequence");

  // Atur pin sebagai OUTPUT
  pinMode(lampu_hijau, OUTPUT);
  pinMode(lampu_kuning, OUTPUT);
  pinMode(lampu_merah, OUTPUT);
}

void loop()
{
  // Nyalakan LED hijau dulu
  digitalWrite(lampu_hijau, HIGH);
  Serial.println("LED Hijau ON");
  delay(1000);
  digitalWrite(lampu_hijau, LOW);

  // Nyalakan LED kuning
  digitalWrite(lampu_kuning, HIGH);
  Serial.println("LED Kuning ON");
  delay(1000);
  digitalWrite(lampu_kuning, LOW);

  // Nyalakan LED merah
  digitalWrite(lampu_merah, HIGH);
  Serial.println("LED Merah ON");
  delay(1000);
  digitalWrite(lampu_merah, LOW);
}
