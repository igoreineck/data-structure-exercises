#define SUCESSO 1
#define ERRO 0
#define PILHA_VAZIA -1
#define PILHA_NAO_VAZIA -2
#define PILHA_CHEIA - 3
#define PILHA_NAO_CHEIA -4

typedef struct {
	int *dados;
	int capacidade;
	int topo;
} Pilha;

int inicializa_pilha(Pilha *p, int capacidade);
int empilha(Pilha *p, int dado);
int desempilha(Pilha *p);
int mostra_pilha(Pilha p);
int topo(Pilha *p);
int estah_vazia(Pilha p);
int estah_cheia(Pilha p);
int remove_pilha(Pilha *p);
