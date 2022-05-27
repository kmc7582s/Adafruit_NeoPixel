#include <Adafruit_NeoPixel.h>
#define PIN 6
#define PIXEL 64

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(PIXEL,PIN,NEO_GRB + NEO_KHZ800);

void setup(){
    pixels.begin();
}

void loop(){
  for(int i=0; i<64; i++){
    pixels.setPixelColor(0,0,255);
  }
  pixels.show();
}
