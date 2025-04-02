#include <stdio.h>

int menor_numero(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    } else {
        return -1;
    }
}

int main() {
    /*
    Escreva uma função que receba dois números inteiros e retorne o menor número.
    */
    int a, b;
    scanf("%d %d", &a, &b);
    int menor = menor_numero(a, b);
    printf("%d\n", menor);
}