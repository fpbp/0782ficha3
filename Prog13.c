#include <stdio.h>

int main(void){
    int numero;
    
    printf("Escolhe um numero entre 1-7\n");
    scanf(" %d", &numero);

    switch (numero)
    {
        case 1:
    printf("Domingo\n");
        break;
            
        case 2:
    printf("Segunda\n");
        break;
       
        case 3:
    printf("Terça\n");
        break;
            
        case 4:
    printf("Quarta\n");
        break;
            
        case 5:
    printf("Quinta\n");
        break;
            
        case 6:
    printf("Sexta\n");
        break;

        case 7:
    printf("Sabado\n");
        break;
    
    default:
        break;
    }
}