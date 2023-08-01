#include "Config.h"
#include "Torret.h"

void setup() {
    torret_setup();
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, LOW);
    torret_loop();
}
