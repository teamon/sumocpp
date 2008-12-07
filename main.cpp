#include "lib/sumo.h"
#include "lib/motor.h"
#include "lib/queue.h"

Motor motor1 = Motor(&OCR1A, &MOTOR1_DIR_PORT, MOTOR1_DIR_PIN);
Motor motor2 = Motor(&OCR1B, &MOTOR2_DIR_PORT, MOTOR2_DIR_PIN);

Queue queue;

void motors(Move move)
{
  motor1.set_power(move.m1);
  motor2.set_power(move.m2);
}

void qpush(char m1, char m2, int time)
{
  Move m;
  m.m1 = m1;
  m.m2 = m2;
  m.time = time;
  queue.push(m);
}

int main() {
  // init();
  led_init();
  motor_init();
  switch_init();
  ground_init();
  dist_init();
  
  leds_on();

  while(!switch1_pressed()){
    if(ground_detected()) led5_on();
    else led5_off();
    
    if(ground1_detected()) led1_on();
    else led1_off();
    
    if(ground2_detected()) led2_on();
    else led2_off();
      
    if(ground3_detected()) led3_on();
    else led3_off();
        
    if(ground4_detected()) led4_on();
    else led4_off();
  }
  
  qpush(30, 0, 5000);
  qpush(-50, 0, 2000);
  qpush(0, 0, 1000);
  qpush(20, 0, 5000);
  
  for(;;){
    // ucieczka
    
    if(ground_detected())
    {
      motor1.stop();
      motor2.stop();
      queue.clear();
      
      if(ground1_detected()) led1_on();
      else led1_off();

      if(ground2_detected()) led2_on();
      else led2_off();

      if(ground3_detected()) led3_on();
      else led3_off();

      if(ground4_detected()) led4_on();
      else led4_off();
    }
    
    
    
    
    if(queue.head){
      motors(queue.pull(10));
    }
    wait_ms(10);
  }
}
