#include<Servo.h>
#define PINSERVODERECHO 12//pIN DEL SERVO DERECHO


Servo servoDerecho;//Declaro el servo derecho


void setup() {
  servoDerecho.attach(PINSERVODERECHO);//Indicar que esta conectado al pin SERVODERECHO
}


void loop() {
  servoDerecho.write(0);//Girar en sentido horario
  delay(1000);
  servoDerecho.write(90);//Detenerse
  delay(1000);
  servoDerecho.write(180);//Girar en sentido antihorario
  delay(1000);
  servoDerecho.write(90);//Detenerse
  delay(1000);
 }
