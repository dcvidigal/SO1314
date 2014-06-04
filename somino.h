#ifndef SOMINO_H
#define SOMINO_H

#include <fcntl.h>

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
	pid_t pid;	// id de jogador (pid)
	int isPlaying;		// se tiver a jogar esta a 0				
	char nome[50];					// nome do jogador
	Pecas Peca[28];					// Pe�as do jogador
};

// Prototipos das fun��es
void cria_molho(Pecas *molho);

#endif /* SOMINO_H */
