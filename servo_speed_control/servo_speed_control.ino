#include<Servo.h>

Servo myServo;



int run_servos(Servo sv, int to, int speed){
  int curr_angle = sv.read();
  if(to > curr_angle){
    curr_angle++;
    sv.write(curr_angle);
    delay(speed);
    return 0; //아직 도착 못함
  } else{
    return 1; //도착 
  }
}



void setup() {
myServo.attach(2);
myServo.write(0);
Serial.begin(115200);
}

int sv1 = 0;
int done = 0;

void loop() {
  if (done == 0){
    sv1 == run_servos(myServo, 150, 60);
    if(sv1 == 1)
    done = 1;
  }
}





















