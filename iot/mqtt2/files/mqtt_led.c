#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "MQTTClient.h"

#define ADDRESS     "dev.rightech.io:1883"  // Free public broker
#define CLIENTID    "mqtt-sofiajoys2401-0h9hon"
#define TOPIC       "base/relay/led1"
#define QOS         1
#define TIMEOUT     10000L

#define LED_PATH "/sys/class/leds/led3/brightness"

// Function to set LED on/off
void set_led(int on) {
    FILE *fp = fopen(LED_PATH, "w");
    if (!fp) {
        perror("fopen");
        return;
    }
    fprintf(fp, "%d", on);
    fclose(fp);
}

// Callback for received messages
int messageArrived(void *context, char *topicName, int topicLen, MQTTClient_message *message) {
    char* payload = message->payload;
    if (strncmp(payload, "1", message->payloadlen) == 0) {
        set_led(1);
        printf("LED ON\n");
    } else if (strncmp(payload, "0", message->payloadlen) == 0) {
        set_led(0);
        printf("LED OFF\n");
    }
    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
    return 1;
}

int main() {
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;

    MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    MQTTClient_setCallbacks(client, NULL, NULL, messageArrived, NULL);

    if (MQTTClient_connect(client, &conn_opts) != MQTTCLIENT_SUCCESS) {
        printf("Failed to connect\n");
        return -1;
    }

    MQTTClient_subscribe(client, TOPIC, QOS);

    printf("Subscribed to topic: %s\n", TOPIC);
    while(1) {
        sleep(1);  // Keep running
    }

    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return 0;
}
