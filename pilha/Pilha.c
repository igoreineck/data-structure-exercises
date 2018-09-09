#include "Pilha.h"
#include <stdlib.h>
#include <stdio.h>

int inicializa_pilha(Pilha *p, int capacidade) {
	p->capacidade = capacidade;
	p->topo = -1;
	p->dados = malloc(sizeof(int)*capacidade);

	printf("Pilha criada com sucesso.\n");

	return SUCESSO;
}

int mostra_pilha(Pilha p) {
	if (estah_vazia(p)) {
		printf("A pilha esta vazia.\n");

		return PILHA_VAZIA;
	}

	for (int i = 0; i <= p.topo; i++) {
		printf("%d\n", p.dados[i]);
	}
}

int empilha(Pilha *p, int dado) {
	if (estah_cheia(*p)) {
		printf("A pilha esta cheia.\n");

		return PILHA_CHEIA;
	}

	p->topo++;
	p->dados[p->topo] = dado;

	return SUCESSO;
}

int desempilha(Pilha *p) {
	if (estah_vazia(*p)) {
		printf("A pilha esta vazia.\n");

		return PILHA_VAZIA;
	}

	p->dados[p->topo] = 0;
	p->topo--;

	return SUCESSO;
}

int topo(Pilha *p) {
	return p->topo;
}

int estah_vazia(Pilha p) {
	return p.topo == -1;
}

int estah_cheia(Pilha p) {
	return p.topo == p.capacidade;
}

int remove_pilha(Pilha *p) {
	if (!estah_vazia(*p)) {
		printf("A pilha nao esta vazia.\n");

		return PILHA_NAO_VAZIA;
	}

	free(p->dados);

	printf("Pilha removida com sucesso.\n");
}