#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"

int main ()
{
	Pilha * p1 = cria_pilha ();
	Pilha * auxp1;
	int i;
	srand(time(0));
	if (p1)
	{
		/* printf ("p1 criada com sucesso!\n");
		do {
			if (rand()%2)
				push(rand()%100, p1);
			else
				pop(&i, p1);
				printf ("%d foi desempilhado\n", i);
			mostra_pilha(p1);
		}while (!pilha_vazia(p1));
		*/

		for (i = 1; i <= 7; i++)
			push(i, p1);

		mostra_pilha(p1);
		auxp1 = p1;
		inverte_pilha(&p1);
		mostra_pilha(p1);
		free(auxp1);

	}else {
		printf ("Falha na alocação de memória!\n");
	}

	return 0;
}
