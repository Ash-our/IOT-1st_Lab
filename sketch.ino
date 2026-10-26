#include <WiFi.h>
#include <ThingSpeak.h>
#include <DHT.h>

const unsigned long channelNumber = 3551772;
const char* apiKey = "DTC99UPZ0LWJKRL9";
const char* universityID = "12324069";

const int DHT_PIN = 15;
DHT sensorDHT(DHT_PIN, DHT22);

const int ledPin = 23;

const char* WiFi_name = "Wokwi-GUEST";
const char* WiFi_Pass = "";

WiFiClient clientObject;

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  sensorDHT.begin();

  WiFi.mode(WIFI_STA);
  WiFi.begin(WiFi_name, WiFi_Pass);

  Serial.print("Connecting to Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  
  ThingSpeak.begin(clientObject);
}

void loop() {
  
  float temperature = sensorDHT.readTemperature();
  float humidity = sensorDHT.readHumidity();


  ThingSpeak.setField(1, temperature);
  ThingSpeak.setField(2, humidity);


  Serial.print("University ID: ");
  Serial.println(universityID);

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);


  int status = ThingSpeak.writeFields(channelNumber, apiKey);

  if (status == 200) {
    Serial.println("Data sent to ThingSpeak successfully!");
  } 


  delay(20000);
}