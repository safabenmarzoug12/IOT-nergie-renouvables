#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled(128, 64, &Wire, -1);

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.setTextColor(SSD1306_WHITE);
  WiFi.mode(WIFI_STA);
  delay(500);

  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setCursor(0, 0);

  oled.println("Infos ESP32");
  oled.printf("Modele: %s\n", ESP.getChipModel());
  oled.printf("Cores: %d MHz\n", ESP.getCpuFreqMHz());
  oled.printf("Flash: %d Mo\n", ESP.getFlashChipSize() / (1024 * 1024));
  oled.printf("RAM: %d Ko\n", ESP.getFreeHeap() / 1024);
  oled.println("MAC:");
  oled.println(WiFi.macAddress());

  oled.display();

  Serial.println("MAC : " + WiFi.macAddress());
}

void loop() {
}