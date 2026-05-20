#include "function_espacopelotempo.c"
#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
	assert(espacopelotempo(80, 2, 0) == 160 && espacopelotempo(40, 2, 0) == 80 && espacopelotempo(40, 2, 3) == 86);
	printf("Teste concluido com sucesso");

	return 0;
}