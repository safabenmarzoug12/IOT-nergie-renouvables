#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define LED 4

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  pinMode(LED, OUTPUT);
  Wire.begin(21, 22);
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.clearDisplay();
  oled.setTextColor(SSD1306_WHITE);
  oled.setTextSize(2);
}

void loop() {
  digitalWrite(LED, HIGH);
  oled.clearDisplay();
  oled.setCursor(20, 20);
  oled.println("LED ON");
  oled.display();
  delay(1000);

  digitalWrite(LED, LOW);
  oled.clearDisplay();
  oled.setCursor(20, 20);
  oled.println("LED OFF");
  oled.display();
  delay(1000);
}
