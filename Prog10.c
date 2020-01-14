#include <stdio.h>

int main (void){
    int fahrenheit;
    float celsius;
    int conta;

    printf("Temperatura em fahrenheit?\n");
    scanf(" %d", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("Em celsius fica %0.1f", celsius);
}