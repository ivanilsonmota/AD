#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha 
{
	int v[MAX];
	int topo;
};


Pilha * cria_pilha () 
{
	Pilha * p = (Pilha *) malloc (sizeof(Pilha));
	if(p)
		p->topo = 0;
	return p;
}
