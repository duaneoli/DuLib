#include <DuMotor.h> //Inclui a biblioteca duMotor.h

DuMotor dumotor; //Instância a DuMotor
#define led 13
/*
 movimento(sentido, velocidade do motor 1, velocidade do motor 2, tempo ligado em ms)
sentido:
	8 - Frente                        |    8
	2 - Tras                          | 4     6
	6 - Direita                       |    2
	4 - Esquerda
Velocidade de 0 a 255, 0 minimo 255 maximo.
	motor 1- ligado aos pinos 
		ard    ci
		6	  9
		4	  15
		7	  10
	motor 2- ligado aos pinos 
		ard    ci
		5	  1
		3	  2
		2	  7
*/

void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600); //Inicia a Serial com um Baud Rate de 9600bps
    dumotor.M1parar(); //Para o motor1
    dumotor.M2parar(); //Para o motor2
}

void loop()
{
  digitalWrite(led,HIGH);
  dumotor.Movimento(8,255,255,500);//MOVENDO PRA FRENTE(8), COM A VELOCIDADE DO MOTOR 1 MAXIMA E A VELOCIDADE DO MOTOR 2 MAXIMA, COM UM TEMPO DE ACIONAMENTO DE 500ms
  digitalWrite(led,LOW);  
  delay(1000);

}
