#include <stdio.h>

void troca_valores(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    /*
    Escreva uma função que troque os valores de dois números inteiros passados por referência.
    */
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d - %d\n", a, b);
    troca_valores(&a, &b);
    printf("%d - %d\n", a, b);
}