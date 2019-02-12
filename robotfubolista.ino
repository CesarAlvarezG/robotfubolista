#include<Servo.h>
#define PINSERVODERECHO 12//pIN DEL SERVO DERECHO


Servo servoDerecho;//Declaro el servo derecho


void setup() {
  servoDerecho.attach(PINSERVODERECHO);//Indicar que esta conectado al pin SERVODERECHO
}

// the loop function runs over and over again forever
void loop() {
  servoDerecho.write(0);
  delay(1000);
  servoDerecho.write(90);
  delay(1000);
  servoDerecho.write(180);
  delay(1000);
  servoDerecho.write(90);
  delay(1000);
 }
