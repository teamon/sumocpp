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

Motor motor1 = Motor(&OCR1A, &MOTOR1_DIR_PORT, MOTOR1_DIR_PIN);
Motor motor2 = Motor(&OCR1B, &MOTOR2_DIR_PORT, MOTOR2_DIR_PIN);

Queue queue;
Move move;

// void turn_around() { queue.push(40, -40, 600); }

// char escaping, grd;

// void escape(){
//   grd = ground();
//   if(grd == 1 || escaping) return; 
//   
//   escaping = 1;
//   queue.clear();
//   
//   char power = 40;
//   char time = 3000;
//   
//   switch(grd){
//     case 6: // przod
//       queue.push(-power, -power, 3000);
//       break;
//     case 35: // tyl
//       queue.push(power, power, 3000);
//       break;
//     case 21: // prawo
//     case 10: // lewo  
//   
//     case 2: // przod lewy
//     case 3: // przod prawy
//     case 5: // tyl lewy
//     case 7: // tyl prawy
//     break;
//   }
// }

int main() {
  // init();
  led_init();
  motor_init();
  switch_init();
  ground_init();
  dist_init();

  leds_on();
  
  int x = 0;
  // int prognum = 1;
  // led_send(prognum);
  for(;;){
        
    if(switch1_pressed()){
      // x = (x==0) ? 1 : 0;
      leds_negate();
      wait_ms(1000);
      exit;
    }
    
    if(!x){
      led1_negate();
    }
    
    // ucieczka    
    // escape();
    // if(dist1_value() > 80) {
    //   led1_on();
    //   
    //   motor1.set_power(-40);
    //   motor2.set_power(-40);
    //   wait_s(1);
    //   
    //   motor1.set_power(40);
    //   motor2.set_power(-40);
    //   wait_ms(500);
    // } else {
    //   led1_off();
    //   
    //   motor1.set_power(40);
    //   motor2.set_power(40);
    // }
    
    // wybor programu
    // if (switch2_pressed()) {
    //   prognum *= 2;
    //   if(prognum > 8) prognum = 1;
    //   led_send(prognum);
    //   wait_ms(100);
    // }
    // 
    // if (switch1_pressed()) {
    //   switch(prognum){
    //     case 1:
    //       queue.push(10, 10, 10000);
    //       break;
    //       
    //     case 2:
    //       queue.push(40, 40, 10000);
    //       break;
    //   }
    // }

    
    // if(queue.head){
    //   move = queue.pull(10);
    //   motor1.set_power(move.m1);
    //   motor2.set_power(move.m2);
    // } else {
    //   leds_off();
    //   motor1.set_power(0);
    //   motor2.set_power(0);
    // }
    wait_ms(50);
  }
}
