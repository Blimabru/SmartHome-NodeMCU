#include <ESP8266HTTPClient.h> //https://arduino.esp8266.com/stable/package_esp8266com_index.json

extern String url;

void enviaRequisicaoPOST(String sensor, String valor) {

  HTTPClient http;
  WiFiClient client; // Cria uma instância de WiFiClient

  http.begin(client, url);  // Especifica o URL do servidor usando WiFiClient

  // Adiciona cabeçalhos
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");

  // Dados para enviar via POST
  String parametros = "sensor=" + sensor + "&valor=" + valor;

  Serial.println("\n\n\nQuery:" + parametros + "\n\n\n");

  // Envia requisição POST
  int httpResponseCode = http.POST(parametros);

  // Verifica o código de resposta
  if (httpResponseCode > 0) {

    String response = http.getString();  // Obter a resposta do servidor

    Serial.println(httpResponseCode);   // Imprimir código de resposta
    Serial.println(response);           // Imprimir resposta do servidor
    
  } else {

    Serial.print("Erro na requisição POST: ");

    Serial.println(httpResponseCode);
  }

  // Finaliza a requisição
  http.end();
}
