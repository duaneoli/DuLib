/** 
  *
  * Biblioteca Dumotor
  * @autor Duane Oliveira
  * 
  *
  **/

  
#include "DuMotor.h"
#include "Arduino.h"

DuMotor::DuMotor()
{
	pwmPinM1=6;
    sentidoPinM1=4;
    sentidoPinM1c=7;

	pwmPinM2=5;
    sentidoPinM2c=2;
	sentidoPinM2=3;
	 
	pinMode(pwmPinM1, OUTPUT);
	pinMode(pwmPinM2, OUTPUT);
	pinMode(sentidoPinM1, OUTPUT);
	pinMode(sentidoPinM2, OUTPUT);
    pinMode(sentidoPinM1c, OUTPUT);
	pinMode(sentidoPinM2c, OUTPUT);

}

void DuMotor::M1move(int velocidade, int sentido,int sentidoc)
{
    analogWrite(pwmPinM1, velocidade);
    digitalWrite(sentidoPinM1, sentido);
    digitalWrite(sentidoPinM1c, sentidoc);
}

void DuMotor::M1parar()
{
    analogWrite(pwmPinM1, 0);
}

void DuMotor::M2move(int velocidade, int sentido,int sentidoc)
{
	analogWrite(pwmPinM2, velocidade);
    digitalWrite(sentidoPinM2, sentido);
    digitalWrite(sentidoPinM2c, sentidoc);
}

void DuMotor::M2parar()
{
    analogWrite(pwmPinM2, 0);
}

void DuMotor::Movimento(int sentido,int vel1,int vel2,int time){
	      //letra = Serial.read(); //Armazena o que foi recebido na variável letra
	      switch(sentido) //Entra no switch para a comparação do caractere recebido
	      {
		      
		      case 8://FRENTE          //Caso o caracter for igual a 8, vai pra FRENTE
		      M1move(vel1,1,0);
		      M2move(vel2,1,0);
		      break; //Sai do switch
		      
		      case 4://ESQUERDA        //Caso o caracter for igual a 4, vira pra ESQUERDA
		      M1move(vel1,0,1);
		      M2move(vel2,1,0);
		      break; //Sai do switch
		      
		      case 2 ://TRÁS            //Caso o caracter for igual a 2, vai pra TRAS
		      M1move(vel1,0,1);
		      M2move(vel2,0,1);
		      break; //Sai do switch
		      
		      case 6 ://senEITA  Caso o caracter for igual a 6, vira pra senEITA
		      M1move(vel1,1,0);
		      M2move(vel2,0,1);
		      break; //Sai do switch
		      
	      }
	      delay(time); //Delay de 250 milissegundos
M2parar(); //Para o motor 2	      
M1parar(); //Para o motor 1
	      
      }
