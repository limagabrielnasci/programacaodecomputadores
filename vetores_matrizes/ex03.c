#include <stdio.h>

int main() {
    /*
    Escrever um algoritmo para armazenar valores numéricos em uma matriz 5x6. A
    seguir, calcular e escrever a média dos valores contidos na matriz. Por último,
    escrever o conteúdo da matriz.
    */
    int i, j;
    float mat[5][6], soma = 0, media = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("\n[%d][%d]: ", i+1, j+1);
            scanf("%f", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }
    media = soma / 30;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3.2f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("media da matriz: %f\n", media);

}