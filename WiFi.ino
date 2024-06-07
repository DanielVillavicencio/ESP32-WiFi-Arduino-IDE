#include <WiFi.h> //Se agrega la biblioteca para WiFi

void setup() {
Serial.begin(115200); //Se configuran los baudios
Serial.println("Iniciando conexion a WiFi"); //Se muestra mensaje en monitor serie de que esta
//conectado a WiFi
WiFi.begin("Lab","B0980z2("); //Se configura y empieza el WiFi con SSID y Contrasena
while(WiFi.status() != WL_CONNECTED){ //Mientras el estado sea diferente a conectado
  delay(500); //Esperamos 500ms 
  Serial.print("."); //Se muestra un punto en monitor serie para ver el proceso
}
Serial.println("CONECTADO"); //Se muestra mensaje que se ha conectado
}

void loop() {
//Aqui resto de codigo que se necesite para el programa.
}
