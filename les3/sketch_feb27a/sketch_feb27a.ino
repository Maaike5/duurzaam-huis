//JSON libraries
#include <ArduinoJson.h>

//JSON variables
JsonDocument doc;
char jsonOut [128];

void setup() {
 Serial.begin(115200); 
}

void loop() {
 CreateJSON();  
}

void CreateJSON(){
  doc ["key"] = "value";
  doc ["key2"]= "value2";
  // make jsonn
  serializeJson(doc, jsonOut);

  // send json to serial
  serializeJson(doc, Serial);
}
