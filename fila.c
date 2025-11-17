#include "fila.h"
#include "cadastro.h"
#include <stdio.h>
#include <stdlib.h>
fila criar_fila(int m){
    fila F = malloc(sizeof(struct fila));
    F -> max = m;
    F -> total = 0;
    F -> inicio = 0;
    F -> final = 0;
    F -> item = malloc(m*sizeof(cadastro));
    return f;
}
int vaziaf(fila F){
    return (F -> total  == 0);
}
int cheiaf(fila F){
    return (F -> total == F -> max);
}
void insert(fila F){
    if(cheiaf(F)) (puts("Fila está cheia")); return;
    F -> item[F -> final] = cadastro();
    avanca(F -> final);
    F -> total++;}
alunos remove(Fila F){
    if(vaziaf(F)) (puts("A fila está vazia")); return;
    alunos x = F -> item[F -> inicio];
    avanca(F -> inicio);
    return x;
}
void destroif(fila g){
    free((*g -> item));
    free(*g);
    *g = NULL;
}


