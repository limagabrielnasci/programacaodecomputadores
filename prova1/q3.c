#include <stdio.h>

int main() {
    /*
    Faça um programa (em C) que lê um vetor de 3 
    elementos e uma matriz de 3x3 elementos informados pelo usuário.
    Em seguida o programa deve fazer a multiplicação do vetor pela matriz da seguinte forma:
    */
    int vet[3], mat[3][3];
    int i, j;
    for (i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", vet[i]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = vet[i] * mat[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}