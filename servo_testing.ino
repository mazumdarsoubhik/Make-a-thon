#include <Servo.h> 
// Declare the Servo pin 
int pinClaw = 10;
int pinPivot =  11;
// Create a servo object 
Servo servoClaw;
Servo servoPivot;
 
void setup() { 
   // We need to attach the servo to the used pin number 
   servoClaw.attach(pinClaw);
   servoPivot.attach(pinPivot);
   
    
}



void loop(){ 
    delay(2000); // Pringle deteecting sensor INPUT

    gripBall();

    servoFinalPos();  // Map the position of servo and check if it is in initial position or not,if not minus that much of rotation in proper direction.
    delay(2000);
    releaseBall();
    
    servoInitialPos();
}




void gripBall(){
 
  servoClaw.write(120);
  delay(500);
}

void releaseBall(){
 
  servoClaw.write(-120);
  delay(500);
  
}

void servoInitialPos(){
  servoPivot.write(-90);
  delay(500);
 
}

void servoFinalPos(){
  servoPivot.write(90);
  delay(500);
}

