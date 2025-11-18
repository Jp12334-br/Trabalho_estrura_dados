#ifndef ENGINE_H
#define ENGINE_H
#define tipoitem char

// Declaração da lista
struct Node{
    tipoitem *valor;
    struct node *prox;
}*lista;
//Declaração da pilha
typedef struct
{
    struct  node *topo;   
}*pilha;
//Essa função cria uma pilha
pilha cria(void);
//Essa função insere um valor da lista
Node  insert_list(no *l, tipoitem x);
//Essa munção remove o valor da lista
Node remove_list( no *l);
// Essa função insere um valor no topo
void push(pilha *p, tipoitem x);
//Essa função, verifica se a pilha está vazia
int is_void( pilha *p);
//Essa função ela remove o valor no topo
tipoitem pop (pilha *p);
// Essa função libera a pilha
void livre(pilha*p);
// Essa função impremi os valores
void imprime(pilha* p);



#endif

