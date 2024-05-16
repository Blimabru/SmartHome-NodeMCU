#include <DHT.h> //https://www.arduino.cc/reference/en/libraries/dht-sensor-library/

#define DHTPIN D3     // Define o pino ao qual o sensor está conectado
#define DHTTYPE DHT11 // Define o tipo do sensor (DHT11, DHT21, DHT22

DHT dht(DHTPIN, DHTTYPE);

void verificarTemperatura() {

  dht.begin();

  delay(1000); // Aguarda 1 segundo entre as leituras

  float t = dht.readTemperature();  // Lê a temperatura em Celsius

  // Converter valores para String
  String temperatura = String(t,1) + " °C"; // 2 indica duas casas decimais

  // Envia dados para o site
  enviaRequisicaoPOST("temperatura", temperatura);
}

void verificarUmidade() {

  dht.begin();

  delay(1000); // Aguarda 1 segundo entre as leituras

  float u = dht.readHumidity();     // Lê a umidade relativa

  // Converter valor float para inteiro
  int umidadeInt = (int)u;

  // Converter valor inteiro para String
  String umidade = String(umidadeInt) + "%";

  // Envia dados para o site
  enviaRequisicaoPOST("umidade", umidade);
}