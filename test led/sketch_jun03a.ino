#include <Adafruit_NeoPixel.h>
#define PIN 4
#define PIXEL 4

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(PIXEL,PIN,NEO_GRB+NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
}

void loop() {
  int data=analogRead(A2);
  Serial.println(data);
  
  if (data<170){
      for(int i=0; i<4; i++){
        pixels.setPixelColor(i,255,255,255);
      }
      pixels.show();
  }
  else{
      for(int i=0; i<4; i++){
        pixels.setPixelColor(i,0,0,0);
      }
      pixels.show(); 
  }
  
  delay(1000);
}
