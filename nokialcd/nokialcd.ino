#include <LCD5110_Graph.h>

// The PINS the 5110 LCD is connected to
const int DIG_LCD_SCK = 8;
const int DIG_LCD_MOSI = 9;
const int DIG_LCD_DC = 10;
const int DIG_LCD_RST = 11;
const int DIG_LCD_CS = 12;

LCD5110 myGLCD(DIG_LCD_SCK, DIG_LCD_MOSI, DIG_LCD_DC, DIG_LCD_RST, DIG_LCD_CS);

extern uint8_t SmallFont[];

void setup() {
  // Open Serial connection for debug output
  Serial.begin(9600);

  // Initialise the LCD screen
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);

  myGLCD.clrScr();
  myGLCD.print("HELLO WORLD", CENTER, 10);
  myGLCD.update();

}

void loop() {
  // put your main code here, to run repeatedly:

}
