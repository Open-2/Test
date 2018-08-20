#include <Camera.h>

void Camera::setup(){
  Serial3.begin(9600);
}

void Camera::update(){
  if(Serial3.available() >= 7) {
    if(Serial3.read() == 255) {
      for (int i = 0; i < CAM_BUFFER_NUM; i++){
        camBuffer[i] = Serial3.read();
           }
        }
    }
  ballx = camBuffer[1];
  bally = camBuffer[2];

  yellowGoalx = camBuffer[3];
  yellowGoaly = camBuffer[4];

  blueGoalx = camBuffer[5];
  blueGoaly = camBuffer[6];

  Serial.print("Ball (");
  Serial.print(ballx);
  Serial.print(", ");
  Serial.print(bally);
  Serial.print(") Blue Goal (");
  Serial.print(blueGoalx);
  Serial.print(", ");
  Serial.print(blueGoaly);
  Serial.print(") Yellow Goal (");
  Serial.print(yellowGoalx);
  Serial.print(", ");
  Serial.print(yellowGoaly);
  Serial.println(")");
}
