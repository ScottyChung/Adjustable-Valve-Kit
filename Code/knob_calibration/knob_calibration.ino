/*
  knob_calibration

  Reads an analog input on pin 0, converts it to a servo range, sets a servo on pin 9 to the position, 
  and prints value to serial monitor.
*/
#include <Servo.h>

Servo myservo;

int servo_high = 180;
int servo_low = 0;
int pot_high = 1023;
int pot_low = 0;

// the setup routine runs once when you press reset:
void setup() {
  myservo.attach(9);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a servo output (0,180):
  int servo_out = sensorValue * (float)(servo_high-servo_low)/(float)(pot_high-pot_low);
  // print out the servo values
  Serial.println(servo_out);
  // Write to servo
  myservo.write(servo_out);
}
