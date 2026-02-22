/* 
* Task Code Below!
* Fitted for Arduino
*/

//PIN LIST (as of 2/22/26) ('*' are in use)
// PWM: 3*,5*,11
// DIGTAL: 22*,23*,24*,25*,26*,27-43, 47-53


/* Crank Motor Pin and Global Variables */
#define crankIN1 22 //digital output
#define crankIN2 23 //digital output
#define crankEN 3 //PWM output
#define crankSpeed 75 //0 - 255, sets crank speed, motor will not move below 60
#define crankDuration 2000 //2 sec spin time

/* Push Motor Pin and Global Variables*/
#define pushIN1 24 //digital output
#define pushIN2 25 //digital output
#define pushEN 5 //PWM output
#define pushSpeed 200 //0 - 255, sets crank speed, motor will not move below 60
#define pushDuration 5000 //5 sec spin time

/* Flag Servo Pin and Global Variables*/
//Run flagSetup() within the setup code!
#include <Servo.h>
Servo flagServo; //Create servo object
#define flagPin 26 //digital output pin

/* Flag Task Setup Function, call during setup code */
void flagSetup(void)
{
  //Attach servo to pin
  flagServo.attach(flagPin);
  flagServo.write(0);
}

/* Flag Task Function, call when the flag needs to be dropped */
//About 2 seconds of runtime
void flagTaskControl(void)
{
  //Rotate servo to 180 degrees (drop 'flag')
  flagServo.write(180);
  delay(flagDelay);
  //Reset position
  flagServo.write(0);
}

/* Crank Task Function, call when the task needs to start */
//About 4 seconds of runtime
void crankTaskControl(void)
{
  //Rotate motor CW
  digitalWrite(crankIN1, HIGH);
  digitalWrite(crankIN2, LOW);
  //Set motor speed to enable pin
  analogWrite(crankEN, crankSpeed);
  //Rotate for set duration
  delay(crankDuration);
  //Stop motor
  digitalWrite(crankIN1, LOW);
  digitalWrite(crankIN2, LOW);
}

/* Push Task Function, call when the task needs to start */
//About 12 seconds of runtime
void pushTaskControl(void)
{

  //Rotate motor EXTEND
  digitalWrite(pushIN1, HIGH);
  digitalWrite(pushIN2, LOW);
  //Set motor speed to enable pin
  analogWrite(pushEN, pushSpeed);
  //Rotate for set duration
  delay(pushDuration);
  //Stop motor
  digitalWrite(pushIN1, LOW);
  digitalWrite(pushIN2, LOW);

  delay(1000);

  //Rotate motor CONTRACT
  digitalWrite(pushIN1, LOW);
  digitalWrite(pushIN2, HIGH);
  //Set motor speed to enable pin
  analogWrite(pushEN, pushSpeed);
  //Rotate for set duration
  delay(pushDuration);
  //Stop motor
  digitalWrite(pushIN1, LOW);
  digitalWrite(pushIN2, LOW);

}
