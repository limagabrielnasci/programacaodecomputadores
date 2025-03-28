#include <stdio.h>

int main() {
    /*
    Faça um algoritmo que leia um número e mostre se ele é positivo, negativo ou
    zero.
    */
    int a;
    scanf("%d", &a);
    if (a > 0) {
        printf("positivo\n");
    } else if (a < 0) {
        printf("negativo\n");
    } else {
        printf("zero\n");
    }
}
