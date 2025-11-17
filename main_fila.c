#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.h"
#include "fila.h"
#define TAM 10;

int main(void){
    fila classroom;

    classroom = criar_fila(TAM);
    menu(classroom);
    fila_entrega_kits(classroom);
}