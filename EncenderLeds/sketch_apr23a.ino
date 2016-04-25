//Import de la librería
#include <Adafruit_NeoPixel.h>
//Pin al que se conectan los led
#define PIN            6
//Cantidad de leds en la tira
#define NUMPIXELS      12
//Objeto Anillo Pixel (Pixels,Pin,Pixel Type)
Adafruit_NeoPixel Tirapixeles = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  Tirapixeles.begin();
  Tirapixeles.setBrightness(128);
  Tirapixeles.show();

}

void loop() {
  for(int x =0; x<=NUMPIXELS; x++){
    int g = random(0,255);
    int r = random(0,255);
    int b = random(0,255);
    Tirapixeles.setPixelColor(x,g,r,b);
  }
  Tirapixeles.show();
  delay(1000);
}
