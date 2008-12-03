#include "lib/sumo.h"

int main() {
  // init();
  led_init();
  leds_on();
	for(;;){
    wait_ms(50);
	}
}
