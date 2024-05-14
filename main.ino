#include <ESP8266WiFiMulti.h>
#include <LiquidCrystal_I2C.h>  // Download: www.arduino.cc/reference/en/libraries/liquidcrystal-i2c/

LiquidCrystal_I2C lcd(0x3F, 16, 2);
ESP8266WiFiMulti wifiMulti;  // Instancia um objeto ESP8266WiFiMulti chamado wifiMulti

void setup() {

  Serial.begin(115200);

  iniciaDisplay();
  msgInicial();
  conectaWifi();
}

void loop() {
}
