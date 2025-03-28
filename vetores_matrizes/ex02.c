#include <stdio.h>
#define TAM 100

int main() {
    /*
    Faça um algoritmo que leia uma variável de 100 elementos numéricos e verifique
    se existem elementos iguais a 30. Se existirem, escrever as posições em que estão
    armazenados.
    */
    int i, vet[TAM];
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < TAM; i++) {
        if (vet[i] == 30) {
            printf("numero 30 na posicao: %d\n", i + 1);
        }
    }
}