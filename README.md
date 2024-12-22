# ESP32 WebSocket Server for Critical Data Simulation

## Overview

This program sets up an ESP32 as an Access Point and WebSocket server to simulate the monitoring and transmission of critical data such as radiation, focus temperature, ambient temperature, and humidity. The system provides real-time updates and can handle multiple connected clients.

---

## Features

- **Access Point Mode:** Creates a local Wi-Fi network with configurable SSID and password.
- **WebSocket Server:** Enables real-time communication with connected clients over WebSocket protocol on port 81.
- **Simulated Data Monitoring:** Generates and updates critical data (radiation, focus temperature, etc.) at random intervals.
- **Efficient Updates:** Sends data only when significant changes are detected.
- **JSON Data Transmission:** Critical data is transmitted in JSON format for easy parsing.

---

## Hardware Requirements

1. **ESP32 Development Board**
2. **Power Supply (USB or external)**

---

## Software Requirements

1. **Arduino IDE or PlatformIO** with the following libraries:
   - `WiFi.h` and `WiFiAP.h`
   - `WebServer.h`
   - `WebSocketsServer.h`

---

## Program Components

### Access Point Configuration

- The ESP32 creates a local Wi-Fi network with the SSID `ESP32-WROOM` and password `wifiesp32`. The IP address is printed to the Serial Monitor after initialization.

### WebSocket Server

- The WebSocket server listens on port 81 and handles the following events:
  - **Connection and Disconnection Events:** Logs client connection and disconnection.
  - **Message Handling:** Processes messages related to "mode" and "button" updates.

### Critical Data Simulation

- **Variables:** Simulates the following critical variables:
  - Radiation (`radiacion`)
  - Focus temperature (`tempFoco`)
  - Humidity (`humedad`)
  - Ambient temperature (`tempAmbiente`)
- **Update Logic:**
  - Generates random variations in the variables every 5-10 seconds.
  - Checks for significant changes (threshold: 5%) before sending updates.

### Data Transmission

- Critical data is transmitted in JSON format to all connected clients via WebSocket.
- Example JSON:
  ```json
  {
    "radiacion": 550.0,
    "tempFoco": 120.0,
    "humedad": 40.0,
    "tempAmbiente": 30.0
  }
  ```

---

## How to Use

1. **Hardware Setup:**
   - Connect the ESP32 to your computer or power supply.
2. **Code Upload:**
   - Open the code in Arduino IDE.
   - Select the appropriate board and port settings.
   - Upload the code to the ESP32.
3. **Connect to the Access Point:**
   - On your device, connect to the Wi-Fi network `ESP32-WROOM` with password `wifiesp32`.
4. **WebSocket Client:**
   - Use a WebSocket client (e.g., browser or dedicated app) to connect to `ws://<ESP32_IP>:81`.
   - Receive real-time data updates in JSON format.

---

## Additional Notes

- **Debugging:**
  - The Serial Monitor provides logs for WebSocket events, variable updates, and JSON transmissions.
- **Random Intervals:**
  - The time interval for data updates is randomized between 5-10 seconds to simulate dynamic behavior.
- **Customizable Thresholds:**
  - You can modify `max_variacion` and `umbral_envio` constants to adjust the sensitivity of the update logic.

---

## Example Output

### Serial Monitor
```
Configurando ESP32 como Access Point...
SSID: ESP32-WROOM
Dirección IP: 192.168.4.1
Servidor WebSocket iniciado.
Cliente 0 conectado.
Botón recibido: ENCENDER
Modo recibido: AUTOMÁTICO
Enviando datos críticos simulados:
{"radiacion":572.5,"tempFoco":118.8,"humedad":41.2,"tempAmbiente":30.5}
```

---

### WebSocket JSON Output
```json
{
  "radiacion": 572.5,
  "tempFoco": 118.8,
  "humedad": 41.2,
  "tempAmbiente": 30.5
}
