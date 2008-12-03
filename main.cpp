#include "lib/sumo.h"
#include "lib/motor.h"

Motor motor1 = Motor(&OCR1A, &MOTOR1_DIR_PORT, MOTOR1_DIR_PIN);
Motor motor2 = Motor(&OCR1B, &MOTOR2_DIR_PORT, MOTOR2_DIR_PIN);

int main() {
  // init();
  led_init();
  motor_init();
  switch_init();
  
  
  leds_on();
  
  wait_switch1();
  
  
  motor1.forward();
  
  motor1.set_power(10);
  motor1.forward();
  wait_s(2);
  motor1.set_power(20);
  motor1.forward();
  wait_s(2);
  motor1.set_power(30);
  motor1.forward();
  wait_s(2);
  motor1.stop();
  wait_s(2);
  motor1.forward();
  
  
  wait_s(4);
  motor2.forward();
  
  motor2.set_power(10);
  motor2.forward();
  wait_s(2);
  motor2.set_power(20);
  motor2.forward();
  wait_s(2);
  motor2.set_power(30);
  motor2.forward();
  wait_s(2);
  motor2.stop();
  wait_s(2);
  motor2.forward();
  
  
  // led_send(OCR1A);
  
	for(;;){
    leds_negate();
    wait_ms(300);
	}
}
