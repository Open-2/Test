#include <Arduino.h>
#include <Camera.h>
#include <Define.h>

Camera camera;

void setup(){
Serial.begin(9600);
camera.setup();



}

void loop(){
  //Serial.print(Serial3.read());
  camera.update();


}
