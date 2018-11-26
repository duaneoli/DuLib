/** 
  *
  * Biblioteca Dumotor
  * @autor Duane oliveira
  * 
  **/


#ifndef DuMotor_H
#define DuMotor_H

class DuMotor 
{
public:

DuMotor();

void move(unsigned char speed, int sentido ,int sentidoc);
void stop();
void Movimento(int sentido, int vel1, int vel,int time);

    
private:

	int pwmPinM1;
	int sentidoPinM1;
	int sentidoPinM1c;
	int pwmPinM2;
	int sentidoPinM2;
	int sentidoPinM2c;
};

#endif