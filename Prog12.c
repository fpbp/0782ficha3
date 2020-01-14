#include <stdio.h>

int main(void){
    float premio = 500000;
    float vencedores;
    float conta;

    printf("A importancia 500000,00€ será dividida entre três vencedores\n");
    

    conta = 500000 * 0.46;
    
    printf("O primeiro vencedor vai receber %0.2f \n", conta);

    conta = 500000 * 0.32;
    printf("O segundo vencedor vai receber %0.2f \n", conta);

    conta = 500000 * 0.22;
    printf("O terceiro fica com o restante que é %0.2f.\n", conta);

}