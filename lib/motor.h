#ifndef MOTOR_H_
#define MOTOR_H_

class Motor
{
public:
  Motor();
  Motor(volatile uint16_t* reg, volatile uint8_t* port, unsigned char pin);
  void set_power(unsigned char power);
  void forward();
  void stop();
  

private:
  unsigned int power;
  unsigned int max_power;
  volatile uint16_t* REG;
  volatile uint8_t* DIR_PORT;
  unsigned char DIR_PIN;
  
};

// Motor motor1;
// Motor motor2;


#endif