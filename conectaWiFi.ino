void conectaWifi() {

  const uint32_t connectTimeoutMs = 10000;  // Tempo limite para conectar ao Wi-Fi.
  bool conectado = false;

  WiFi.mode(WIFI_STA);     // Configura o WiFi para modo estação
  WiFi.persistent(false);  // Não salvar a configuração WiFi em flash - opcional

  // Conecta ao Wi-Fi
  while (!conectado) {

    Serial.println("Conectando ao Wi-Fi...");

    credenciaisWifi();

    if (wifiMulti.run(connectTimeoutMs) == WL_CONNECTED) {
      Serial.println("Ok.\n");
      Serial.print("Conectado a: ");
      Serial.println(WiFi.SSID());
      Serial.print("IP local: ");
      Serial.println(WiFi.localIP());
      Serial.print("\n");

      conectado = true;

      break;

    } else {
      Serial.print("Erro ao conectar ao Wi-Fi: ");
      Serial.println(WiFi.status());
      delay(1000);
    }
  }
  delay(1000);
}