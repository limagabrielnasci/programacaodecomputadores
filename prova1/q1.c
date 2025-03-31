#include <stdio.h>

int main() {
    /*
    Faça um programa (em C) que solicite ao usuário digitar valores
    numéricos inteiros positivos. Encerre a entrada de dados quando for 
    digitado um número negativo ou zero. Escreva o menor e o maior número 
    dentre os números positivos digitados. Obs.: utilizar a estrutura de repetição enquanto.
    */
    int num, menor, maior;
    scanf("%d", &num);
    menor = maior = num;
    while (1) {
        scanf("%d", &num);
        if (num <= 0) {
            break;
        }
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("menor: %d", menor);
    printf("\nmaior : %d", maior);
}