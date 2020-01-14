#include <stdio.h>

int main(void){
    int numero;
    int conta;

    printf("Escolha um numero\n");
    scanf(" %d", &numero);

    conta = numero - 1;

    printf("O numero antecessor é %d\n", conta);

    conta = numero + 1;

    printf("O numero sucessor é %d\n", conta);

    
}