void setup() {
  Serial.begin(115200);

  iniciaDisplay();
  conectaWifi();
  
}

void loop() {
  verificarTemperatura();
  verificarUmidade();
}
