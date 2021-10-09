#include <ArduinoWebsockets.h>
#include <WiFi.h>

// Wifi credentials
const char* ssid = "change it - wifi ssid";
const char* password = "change it - wifi password";
const char* websockets_server_host = "change it - websocket ip or url";
const char* websockets_server_path = "ws";
const uint16_t websockets_server_port = 3000;

using namespace websockets;

WebsocketsClient client;

void setup() {
  Serial.begin(9600);

  // Connect to wifi network
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println(WiFi.localIP());

  bool connected = client.connect(websockets_server_host, websockets_server_port, "/");
  if(connected) {
      Serial.println("connected to websocket server");
      client.send("Hello Server");
  } else {
      Serial.println("websocket server not available!");
  }

  client.onMessage([&](WebsocketsMessage message){
        Serial.print("message recieved: ");
        Serial.println(message.data());
    });


}

void loop() {
  client.poll();

}
