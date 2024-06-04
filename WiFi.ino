#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando conexion a WiFi");
  WiFi.begin("SSID","PASSWORD");
    while(WiFi.status() != WL_CONNECTED){
      delay(500);
      Serial.print(".");
    }
  Serial.println("CONECTADO");
}

void loop() {
}
