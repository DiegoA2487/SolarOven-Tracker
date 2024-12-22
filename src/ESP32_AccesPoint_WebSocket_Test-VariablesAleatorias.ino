#include <WiFi.h>
#include <WiFiAP.h>
#include <WebServer.h>          // Libreira de Ivan Grokhotkov
#include <WebSocketsServer.h>   // Servidor WebSocket: Libreria de Markus 

// Configuración del Access Point
const char* ssid = "ESP32-WROOM";
const char* password = "wifiesp32";

WebSocketsServer webSocket(81); // Servidor WebSocket en el puerto 81

// Variables de estado (modo y botón)
String modoActual;
String botonPresionado;


// Variables para datos críticos simulados
float radiacion = 550.0;    // en W/m²
float tempFoco = 120.0;     // en °C
float humedad = 40.0;       // en %
float tempAmbiente = 30.0;  // en °C

// Umbrales de variación
const float max_variacion = 0.10; // 10% de variación máxima
const float umbral_envio = 0.05;  // 5% para enviar actualización

unsigned long ultimoTiempo = 0;   // Tiempo de la última actualización
unsigned long intervaloAleatorio = random(5000, 10001); // Intervalo inicial aleatorio

void setup() {
    Serial.begin(115200);
    WiFi.softAP(ssid, password);
    Serial.println("Configurando ESP32 como Access Point...");
    Serial.print("SSID: ");
    Serial.println(ssid);
    Serial.print("Dirección IP: ");
    Serial.println(WiFi.softAPIP());

    webSocket.begin();
    webSocket.onEvent(onWebSocketEvent);

    Serial.println("Servidor WebSocket iniciado.");
}

void loop() {
    // Manejar el servidor WebSocket
    webSocket.loop();

    // Verificar si ha pasado el intervalo de tiempo para actualizar variables
    unsigned long tiempoActual = millis();
    if (tiempoActual - ultimoTiempo >= intervaloAleatorio) {
        //Serial.println("se cumplió el tiempo...");
        ultimoTiempo = tiempoActual;
        intervaloAleatorio = random(5000, 10001); // Generar nuevo intervalo aleatorio entre 5 y 10 segundos

        // Llamar a la función para actualizar variables críticas
        actualizarVariablesCriticas();
    }
}

// Evento de WebSocket
void onWebSocketEvent(uint8_t clientNum, WStype_t type, uint8_t *payload, size_t length) {
    switch (type) {
        case WStype_CONNECTED:
            Serial.printf("Cliente %u conectado.\n", clientNum);
            break;

        case WStype_DISCONNECTED:
            Serial.printf("Cliente %u desconectado.\n", clientNum);
            break;

        case WStype_TEXT:
            String message = String((char *)payload);
            //Serial.println("Mensaje recibido: " + message);
            
            if (message.indexOf("boton") != -1) {
                botonPresionado = message.substring(message.indexOf(":") + 2, message.length() - 2);
                Serial.println("Botón recibido: " + botonPresionado);

                
                // Procesar el botón según la lógica de la aplicación
            } else if (message.indexOf("modo") != -1) {
                modoActual = message.substring(message.indexOf(":") + 2, message.length() - 2);
                Serial.println("Modo recibido: " + modoActual);
                // Procesar el modo según la lógica de la aplicación
            }
            break;
    }
}


// Función para generar una variación aleatoria en un valor
float generarVariacion(float valor) {
    float cambio = ((random(0, 2001) - 1000) / 1000.0) * max_variacion;
    return valor * (1 + cambio);
}

// Función para verificar si el cambio es mayor que el umbral
bool cambioSignificativo(float valorAnterior, float valorActual) {
    float cambio = abs((valorActual - valorAnterior) / valorAnterior);
    return cambio > umbral_envio;
}

// Función para actualizar variables críticas y enviar datos si hay cambios significativos
void actualizarVariablesCriticas() {

    //Serial.println("Actualización en curso");
    // Generar nuevos valores para las variables críticas
    float nuevaRadiacion = generarVariacion(radiacion);
    float nuevaTempFoco = generarVariacion(tempFoco);
    float nuevaHumedad = generarVariacion(humedad);
    float nuevaTempAmbiente = generarVariacion(tempAmbiente);

    // Actualizar y enviar si el cambio es significativo
    bool enviarDatos = false;
    if (cambioSignificativo(radiacion, nuevaRadiacion)) {
        radiacion = nuevaRadiacion;
        enviarDatos = true;
    }
    if (cambioSignificativo(tempFoco, nuevaTempFoco)) {
        tempFoco = nuevaTempFoco;
        enviarDatos = true;
    }
    if (cambioSignificativo(humedad, nuevaHumedad)) {
        humedad = nuevaHumedad;
        enviarDatos = true;
    }
    if (cambioSignificativo(tempAmbiente, nuevaTempAmbiente)) {
        tempAmbiente = nuevaTempAmbiente;
        enviarDatos = true;
    }

    // Enviar datos críticos si hubo cambios significativos
    if (enviarDatos) {
        enviarDatosCriticos();
    }
}

// Función para enviar datos críticos en formato JSON
void enviarDatosCriticos() {
    String jsonData = "{";
    jsonData += "\"radiacion\":" + String(radiacion) + ",";
    jsonData += "\"tempFoco\":" + String(tempFoco) + ",";
    jsonData += "\"humedad\":" + String(humedad) + ",";
    jsonData += "\"tempAmbiente\":" + String(tempAmbiente);
    jsonData += "}";

    Serial.println("Enviando datos críticos simulados:");
    Serial.println(jsonData);

    // Enviar los datos críticos a través de WebSocket a todos los clientes conectados
    webSocket.broadcastTXT(jsonData);
}
