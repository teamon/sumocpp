/*
  G - ground
  D - distance
  M - motor
  ----------------------
  | G-2  D-1  D-2  G-3 |
  |                    |
  |                    |
  | M-1            M-2 |
  |                    |
  |                    |
  | G-5     D-3    G-7 |
  ----------------------
*/

#include "lib/sumo.h"
#include "lib/motor.h"
#include "lib/queue.h"

#define ITIME 50

Queue queue;
Move move;
Motor motor1;
Motor motor2;

void init(){
  led_init();
  motor_init();
  switch_init();
  ground_init();
  dist_init();

  motor1 = Motor(&OCR1A, &MOTOR1_DIR_PORT, MOTOR1_DIR_PIN);
  motor2 = Motor(&OCR1B, &MOTOR2_DIR_PORT, MOTOR2_DIR_PIN);
}

int main() {
  init();
  leds_on();

  for(;;){
        
    if(switch1_pressed()){
      leds_negate();
    }
    


    if(queue.head){
      move = queue.pop(ITIME);
      motor1.set_power(move.m1);
      motor2.set_power(move.m2);
    } else {
      leds_off();
      // zatrzymanie | szukanie
      motor1.set_power(0);
      motor2.set_power(0);
    }
    wait_ms(ITIME);
  }
}
