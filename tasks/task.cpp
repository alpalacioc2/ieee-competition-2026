/* 
* Task Code Below!
* Fitted for Arduino
*/

/* Crank Motor Pin Variables */
const int crankIN1 = 6; //digital output
const int crankIN2 = 7; //digital output
const int crankEN = 9; //PWM output
#define crankSpeed 75 //0 - 255, sets crank speed, motor will not move below 60
#define crankDuration 2000 //2 sec spin time

/* Push Motor Pin Variables*/
const int pushIN1 = 6; //digital output
const int pushIN2 = 7; //digital output
const int pushEN = 9; //PWM output
#define pushSpeed 200 //0 - 255, sets crank speed, motor will not move below 60
#define pushDuration 5000 //5 sec spin time

/* Crank Task Function, call when the task needs to start */
//About 3 seconds of runtime
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
