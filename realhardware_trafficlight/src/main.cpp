#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32


// Deklarasi pin LED
int lampu1 = 25;
int lampu2 = 33;
int lampu3 = 32;

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");


    // Atur pin sebagai OUTPUT
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}


void loop() {
   
  digitalWrite(lampu1, HIGH);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, LOW);

  delay(1000);

  digitalWrite(lampu1, LOW);
  digitalWrite(lampu2, HIGH);
  digitalWrite(lampu3, LOW);

  delay(1000);

  digitalWrite(lampu1, LOW);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, HIGH);

  delay(1000);



}

