#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN        23
#define NUMPIXELS 16


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void NeoBlink(int num, int wait)
{
  for (int i = 0; i < num; i++)
  {
    pixels.setPixelColor(i, 35, 35, 35);
  }
  pixels.show();
  delay(wait);
  for (int j = 0; j < num; j++)
  {
    pixels.setPixelColor(j, 0, 255, 0);
  }
  pixels.show();
  delay(wait);
  for (int t = 0; t < num; t++)
  {
    pixels.setPixelColor(t, 255, 0, 0);
  }
  pixels.show();
  delay(wait);
}

void setup()
{
  pixels.begin();
  pixels.setBrightness(50);
}

void loop()
{
  NeoBlink(16, 500);
}
