#include "lib/sumo.h"
#include "lib/motor.h"

Motor motor1 = Motor(&OCR1A, &MOTOR1_DIR_PORT, MOTOR1_DIR_PIN);
Motor motor2 = Motor(&OCR1B, &MOTOR2_DIR_PORT, MOTOR2_DIR_PIN);

int main() {
  // init();
  led_init();
  motor_init();
  switch_init();
  ground_init();
  
  leds_on();
  
  while(!switch1_pressed()){
    if(ground1_detected()) led1_on();
    else led1_off();
    
    if(ground2_detected()) led2_on();
    else led2_off();
      
    if(ground3_detected()) led3_on();
    else led3_off();
        
    if(ground4_detected()) led4_on();
    else led4_off();
    
    wait_ms(50);
  }
  
  
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
  
	for(;;){
    leds_negate();
    wait_ms(300);
	}
}
