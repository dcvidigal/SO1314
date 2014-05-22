#ifndef SOMINO_H
#define SOMINO_H


typedef struct peca  Pecas, *pPecas;

struct peca {
	int id;							// numero da pe�a
	int numEsq;						// valor � esquerda da pe�a
	int numDir;						// valor � direita da pe�a
	int distribuida;				// j� foi distribuida a um jogador / j� foi jogada???
	pPecas prox;
	pPecas ant;
};

typedef struct jogador Jogadores;

struct jogador {
	int id;							// id de jogador (pid)
	char nome[50];					// nome do jogador
	Pecas Peca[28];					// Pe�as do jogador
};

// Prototipos das fun��es
void cria_molho(Pecas *molho);

#endif /* SOMINO_H */