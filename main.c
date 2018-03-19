#include <stdio.h>
#include "pilha.h"

int main ()
{
	Pilha * p1 = cria_pilha ();

	if (p1)
		printf ("p1 criada com sucesso!\n");
	else
		printf ("Falha na alocação de memória!\n");
	

	return 0;
}
