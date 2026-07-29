#include <stdio.h>
#include <stdlib.h>
#include "function_espacopelotempo.c"

int main(int argc, char const *argv[])
{
    FILE *arquivo = fopen("espacopelotempo.txt", "w");

	double velocidade = atof(argv[1]);
    double tempo = atof(argv[2]);
    double aceleracao = 0;
	if(argc == 4){
		aceleracao = atof(argv[3]);
	}
	if(argc > 4 || argc < 3){
		printf("digite o nome do programa seguido de 2 ou 3 argumentos (ex: espacopelotempo 40 2) (ex: espacopelotempo 40 2 3)");
        printf("\nsendo 40 a velocidade, 2 o tempo, e 3 a aceleracao, esses valores podem ser quaisquer numeros");

        fprintf(arquivo, "digite o nome do programa seguido de 2 ou 3 argumentos (ex: espacopelotempo 40 2) (ex: espacopelotempo 40 2 3)");
        fprintf(arquivo, "\nsendo 40 a velocidade, 2 o tempo, e 3 a aceleracao, esses valores podem ser quaisquer numeros");
        return 0;
	}
	printf("resultado: %f\n", espacopelotempo(velocidade, tempo, aceleracao));
	printf("\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");

    fprintf(arquivo, "resultado: %f\n", espacopelotempo(velocidade, tempo, aceleracao));
	fprintf(arquivo, "\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    return 0;
}
