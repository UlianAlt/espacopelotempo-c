#include <math.h>

double espacopelotempo(double velocidade, double tempo, double aceleracao){
	return velocidade * tempo + (aceleracao*pow(tempo, 2)/2);
}