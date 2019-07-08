
// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
//#ifdef __AVR__
//  #include <avr/power.h>
//#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            2

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      8

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int delayval = 500; // delay for half a second
int contador = 0;

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
/*#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code
*/
  Serial.begin(9600);
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.show();
}

void naranja() {                        //Función para cambiar los pixels de rojo a naranja
  for(int i=0; i!=60; i++) {
    pixels.setPixelColor(1,255,i,0);
    pixels.setPixelColor(2,255,i,0);
    pixels.setPixelColor(3,255,i,0);
    pixels.setPixelColor(4,255,i,0);
    pixels.setPixelColor(5,255,i,0);
    pixels.setPixelColor(6,255,i,0);
    pixels.setPixelColor(7,255,i,0);
    pixels.setPixelColor(8,255,i,0);
    pixels.show();
    delay(30);
  }
  for(int i=60; i>0; i--) {
    pixels.setPixelColor(1,255,i,0);
    pixels.setPixelColor(2,255,i,0);
    pixels.setPixelColor(3,255,i,0);
    pixels.setPixelColor(4,255,i,0);
    pixels.setPixelColor(5,255,i,0);
    pixels.setPixelColor(6,255,i,0);
    pixels.setPixelColor(7,255,i,0);
    pixels.setPixelColor(8,255,i,0);
    pixels.show();
    delay(30);
  }

  
  return 0;
}


void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one. 
 if( contador <10) {
  naranja();
 }
 
  Serial.println("Tolis");
  Serial.println(contador);
  contador++;
  delay(1000);
  
}
