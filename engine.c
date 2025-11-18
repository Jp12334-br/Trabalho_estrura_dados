#include "engine.h"
#include <stdio.h>
#include <stdlib.h>

//Essa função cria uma pilha
pilha cria(void){
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p ->topo = NULL;
    return p;
}
//Essa função insere um valor da lista
Node  insert_list(no *l, tipoitem x){
     Node* p = (Node*) malloc(sizeof(Node));
     p -> valor = x;
     p -> prox = l;
}
//Essa munção remove o valor da lista
Node remove_list( no *l){
    Node* p = l -> prox;
    free(l);
    return p;
}
// Essa função insere um valor no topo
void push(pilha *p, tipoitem x){
    p -> topo = insert_list(p -> topo, x);

}
//Essa função, verifica se a pilha está vazia
int is_void( pilha *p){
    return(p -> topo == NULL);

}
//Essa função ela remove o valor no topo
tipoitem pop (pilha *p){
if(is_void(p)== 1){
    printf("Pilha está vazia \n");
    return;
}
else{
    tipoitem v;
    v = p ->topo -> valor;
    p -> topo = remove_list(p->topo);
    return v;
}
}
// Essa função libera a pilha
void livre(pilha*p){
     node* q = p -> topo;
     while (q != NULL){
        No* t = q -> prox;
        free(q);
        q = t;

     }
     free(p)
     //Imprimi todos valores da pilha
     void imprime(pilha* p){
        no* q;
        for( q =p->topo; q != NULL; q = q->prox ) printf("% c", q -> valor);

     }
     
}