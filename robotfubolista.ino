//REcibir orden del teclado

#include<Servo.h>
#include <SoftwareSerial.h>
#define PINSERVODERECHO 8//pIN DEL SERVO DERECHO
#define TXBluetooth 3
#define RXBluetooth 2


Servo servoDerecho;//Declaro el servo derecho

SoftwareSerial BT(RXBluetooth,TXBluetooth);

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  servoDerecho.attach(PINSERVODERECHO);//Indicar que esta conectado al pin SERVODERECHO
}

int velocidad=10;

char  orden;
void loop() 
{
  if(BT.available()>0)
  {
    orden=BT.read();
    BT.println(orden);
  }
  if(Serial.available()>0)
  {
    orden=Serial.read();
    Serial.println(orden);
  }
  if(orden=='w')
      {
        servoDerecho.write(90-velocidad);//Girar en sentido horario
        delay(1000);
        servoDerecho.write(90);//Detenerse
        delay(1000);
        servoDerecho.write(180);//Girar en sentido antihorario
        delay(1000);
        servoDerecho.write(90);//Detenerse
        delay(1000);      
      }else{
            servoDerecho.write(90);//Detenerse
        }
  if(orden=='+')velocidad+=10;
}
