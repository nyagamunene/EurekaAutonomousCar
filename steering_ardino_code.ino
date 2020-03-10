#include <Servo.h>
Servo steering;
int potpin = A0;
int potvalue;

//defining the steeering function
int steering_function (int potvalue)
{
potvalue=map(potvalue,0,1023,0,180);
steering.write(potvalue);
delay(15);
return(0);
 }

void setup() {

steering.attach(8);
Serial.begin(9600);
}

void loop() {
potvalue=analogRead(potpin);
Serial.println(potvalue);
//calling the steering function
steering_function (potvalue);

}
