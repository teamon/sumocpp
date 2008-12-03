#include "lib/sumo.h"

void led_init() {
	// inicjalizacja diod 1-8
	LED_DDR |= 0xff;
	LED_PORT |= 0xff;
	// inicjalizacja doidy S
	setb(LEDS_DDR,LEDS_PIN);
	setb(LEDS_PORT,LEDS_PIN);
}


int main() {
  // init();
  
	for(;;){
    
	}
}
