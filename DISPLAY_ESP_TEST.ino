#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 64  // Updated for 64x32
#define SCREEN_HEIGHT 32 // Updated for 64x32
#define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // Initialize with I2C address 0x3C or 0x3D
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    for(;;); // Loop forever if failed
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Hello!");
  display.display();
}
void loop() {
  
}
