#include <Arduino.h>
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.begin(NAME, PASSWORD);
}

void loop() {
  while (WiFi.status() == WL_CONNECTED) {
    delay(500);
    Serial.println(WiFi.localIP());
  }
  delay(2000);
}