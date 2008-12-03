#include "lib/sumo.h"

int main() {
  // init();
  led_init();
  leds_on();
  
	for(;;){
    led1_negate();
    wait_ms(300);
	}
}
