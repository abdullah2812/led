#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial
char auth[] = "fNDfnTr1eJhIqIBug3cYYxWTTMv-AJ4J";
char ssid[] = "My ASUS_1005";
char pswd[] = "56784222";
void setup() {
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pswd);
}
void loop() {
 Blynk.run();
}
