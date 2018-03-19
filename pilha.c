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

int pilha_vazia (const Pilha *p)
{
	return !(p->topo); // Otimizado
	/*
	if (p->topo == 0) 
		return 1;
	return 0;
	*/

}

int pilha_cheia (const Pilha *p)
{
	return (p->topo == MAX); // Otimizado
	/*
	if (p->topo == MAX)
		return 1;
	return 0;
	*/

}

int push (int i, Pilha *p) // Empilha
{
	if (pilha_cheia (p))
		return 0;
	else
		p->v[p->topo++] = i; // Otimizado
		/*
		p->v[p->topo] = i;
		p->topo++;
		*/
	return 1;
}

int pop (int *i, Pilha *p) //Desempilha
{
	if (pilha_vazia (p))
		return 0;
	p->topo--;
	*i = p->v[--p->topo];
	return 1;
}

int tamanho_pilha (const Pilha *p)
{
	return p->topo;
}

void mostra_pilha (const Pilha *p)
{
	int i;
	if (pilha_vazia(p)){
		printf ("\nPilha vazia");
	} else {
		for (i = p->topo-1; i >= 0; i--)
			printf ("%d ", p->v[i]);
		printf ("\n");
	}
}

void inverte_pilha (Pilha **p) 
{
	Pilha * aux = cria_pilha();
	int i;
	while (!pilha_vazia(*p))
	{
		pop(&i, *p);
		push(i, aux);
	}
	*p = aux;
}

