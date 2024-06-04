#include <WiFi.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.println("Iniciando conexion a WiFi");
WiFi.begin("Lab","B0980z2(");
while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.print(".");
}
Serial.println("CONECTADO");
}

void loop() {
  // put your main code here, to run repeatedly:

}
