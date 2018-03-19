/* 

empilha()
desempilha()
tamanho()
cheia()
vazia()

*/

#ifndef _PILHA_H
#define _PILHA_H
#define MAX 10

typedef struct pilha Pilha;

Pilha * cria_pilha ();

int push (int, Pilha *); //Empilha

int pop (int *, Pilha *); //Desempilha

int pilha_cheia (const Pilha *);

int pilha_vazia (const Pilha *);

int tamanho_pilha (const Pilha *);

#endif
