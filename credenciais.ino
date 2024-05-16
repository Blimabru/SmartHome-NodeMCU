// Credenciais Wi-Fi
void credenciaisWifi() {

  // Cadastrar múltiplas redes Wi-Fi
  wifiMulti.addAP("SSID 1", "Senha 1");
  wifiMulti.addAP("SSID 2", "Senha 2");
  wifiMulti.addAP("SSID 3", "Senha 3");
  wifiMulti.addAP("SSID 4", "Senha 4");
  wifiMulti.addAP("SSID 5", "Senha 5");
  // ...
}

// URL para o arquivo "conexao.php" que está no servidor WEB, altere conforme necessário
String url = "http://www.google.com";