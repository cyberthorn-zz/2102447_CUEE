/*
 M5Strack WiFiWPA2Personal Demo
 please install the Adafruit library first!
 first edition October 2019, Toppppp
 lasted edition October 2020, Cyberthorn-zz
*/


#include <M5Stack.h>
#include <WiFi.h>

#define WIFI_SSID "XXX" //Fill your SSID name 
#define WIFI_PASS "XXX" //Fill your Password

WiFiClient client;

void setup() {

  M5.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.println("wifi connect begin");
  M5.update();
  
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    M5.Lcd.println("...");
    delay(1000);
  }
  M5.Lcd.println("wifi connected");
  IPAddress ip = WiFi.localIP();
  M5.Lcd.println("IP  Address: " + String(WiFi.localIP().toString()));
  M5.update();

}

void loop() {
  M5.update();
  delay(200);
}
