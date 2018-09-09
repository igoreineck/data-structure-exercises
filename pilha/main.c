#include "Pilha.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	Pilha p1;

	inicializa_pilha(&p1, 5);
	empilha(&p1, 5);
	empilha(&p1, 10);
	empilha(&p1, 15);
	mostra_pilha(p1);

	desempilha(&p1);
	desempilha(&p1);
	desempilha(&p1);
	desempilha(&p1);
	mostra_pilha(p1);

	empilha(&p1, 20);
	mostra_pilha(p1);

	remove_pilha(&p1);
}