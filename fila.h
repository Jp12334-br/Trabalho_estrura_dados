#ifndef FILA_H
#define FILA_H
#define avanca(i) (i = (i+1)% F-> max)
#include <stdio.h>
typedef struct x {
    char nome[50];
    char matricula[20];
    char cpf[12];
}alunos;
typedef struct dados {
    int max;
    int total;
    int inicio;
    int final;
    alunos item;


}*fila;
fila criar_fila(int m);
int vaziaf(fila F);
int cheiaf(fila F);
void insert(alunos x; fila F);
alunos remove(fila F);
void destroif(fila g);


#endif
