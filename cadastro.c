#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.h"
#include "fila.h"

alunos cadastro(){

    alunos x;

    printf("Qual o nome do aluno: \n");
    fgets(x.item.nome, sizeof(x.item.nome), stdin);
    puts("Digite a sua matricula: ");
    fgets(x.item.matricula, sizeof(x.item.matricula), stdin);
    puts("Digite o cpf: ");
    fgets(x.item.cpf, sizeofx.item.cpf, stdin);
    return x;

    
}
void menu(fila F){
    int op,cont = 0;
    do{
        puts("1- Cadastra aluno");
        puts("2- Sair");
        puts("\nEscolha opção");
        scanf("%d", &op);
        switch (op)
        {
        case 1
            insert(fila);
            break;
        case 2:
            break;
        
        default:
            printf("Opção invalida, digite novamente");
            break;
        }
        cont++;
    }while (op != 2);
    void fila_entrega_kits(fila f){
        alunos aux;
        for(int i = 0; i < 10; i++){
        aux = remove(f)
        printf("\n\n\n\n===================== ALUNO %d° ======================= \n \n",i);
        printf("Nome do Aluno: %s\n", aux.nome );
        printf("-----------------------------------------------------------------------");
        printf("Matricula do aluno: %s\n", aux.matricula);
        printf("-----------------------------------------------------------------------");
        printf("CPF: %s \n", aux.cpf );
        printf("-----------------------------------------------------------------------");
            
        }

    }

    

}