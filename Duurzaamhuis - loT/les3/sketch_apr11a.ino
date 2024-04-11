#include <ArduinoJson.h>

JsonDocument doc;
char jsonOut[128];

void setup() {
  Serial.begin(115200);
}

void loop () {
  CreateJSON();
}

void CreateJSON() {
  doc["key1"] = "500";
  doc["doc2"] = "250";

  serializeJson(doc, jsonOut);

  serializeJson(doc, Serial);
}
