#include <stdio.h>

int main() {
    /*
    Crie uma matriz de 3x3 e preencha com valores. Utilizando ponteiros, imprima os
    elementos da matriz e calcule a soma de todos os elementos.
    */
    int mat[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int i, j, soma = 0, *p;
    p = &mat[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(p + i + 3 + j));
            soma += *(p + i + 3 + j);
        }
        printf("\n");
    }
    printf("\nsoma = %d\n", soma);
}