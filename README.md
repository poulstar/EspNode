# EspNode

ESP32/ESP8266 connection to Nodejs websocket

## Installation (ESP)

- Add ESP board url to Arduino Studio. Add board url to File -> Preferences -> Additional board managers urls
```shell
# ESP32
https://dl.espressif.com/dl/package_esp32_index.json
# ESP8266 ->
http://arduino.esp8266.com/stable/package_esp8266com_index.json
```

- Install ArduinoWebsockets Library. from Sketch -> Include Libraries -> Manage Libraries
- Open project located in sketch/sketch.ino
- Update Wifi credentials
```ino
// Wifi credentials
const char* ssid = "change it - wifi ssid";
const char* password = "change it - wifi password";
const char* websockets_server_host = "change it - websocket ip or url";
const char* websockets_server_path = "ws";
```
- Compile and run
- Look for logs in nodejs Terminal and arduino studio Serial Monitor


## Installation (NodeJS)

```shell
npm install
```

## Run server

```shell
npm start
```

## Links

- <a href="https://www.ardu-badge.com/ArduinoWebsockets">ArduinoWebsockets</a>
- <a href="https://github.com/websockets/ws">WS</a>
- <a href="https://github.com/gilmaimon/ArduinoWebsockets">Code samples</a>