
//#include <Servo.h>

#include <Servo.h>

Servo tap_servo;

int sensor_pin = 4;
int tap_servo_pin =5;
int val;
int count=0;

void setup(){
  pinMode(sensor_pin,INPUT);
  tap_servo.attach(tap_servo_pin);

  
  
}

void loop(){
  val = digitalRead(sensor_pin);

  if (val==0)
  {tap_servo.write(0);
  }
  
  
  if (val == 0) {
    if (count % 2 == 0) {
      tap_servo.write(90);
      delay(1000);
      count++;
      
      //val=0;
    }
    else if (count % 2 == 1) {
      tap_servo.write(0);
         delay(1000);
      count++;
      //    val=0;
    }
  }
}
      
 
