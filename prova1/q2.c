#include <stdio.h>
#define TAM 5

int main() {
    /*
    Faça um programa (em C) que leia um vetor com os pesos de 100 alunos de uma 
    academia, não aceitar pesos negativos, apresentando a mensagem
    "PESO INVÁLIDO!". Calcule e escreva a média dos pesos dos alunos, quantos 
    alunos estão acima da média e liste os pesos que estão acima da média calculada.
    */
    float peso[TAM], soma = 0;
    int i, acima_da_media = 0;
    for (i = 0; i < TAM; i++) {
        do {
            scanf("%f", &peso[i]);
            if (peso[i] < 0) {
                printf("PESO INVALIDO!\n");
            }
        } while (peso[i] < 0);
        soma += peso[i];
    }
    float media = soma / TAM;
    printf("\n");
    for (i = 0; i < TAM; i++) {
        if (peso[i] > media) {
            acima_da_media++;
            printf("Peso acima da media = %.2f\n", peso[i]);
        }
    }
    printf("Media = %.2f\n", media);
    printf("Alunos acima da media = %d\n", acima_da_media);
}