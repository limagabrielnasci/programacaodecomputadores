#include <stdio.h>

int main() {
    /*
    Implemente um algoritmo que recebe dois ponteiros para inteiros e troca os valores
    das variáveis apontadas por esses ponteiros.
    */
    int v1 = 1, v2 = 3, *p1, *p2;
    p1 = &v1;
    p2 = &v2;
    printf("v1: %d\nv2: %d\n\n", v1, v2);
    printf("p1 antes: %d\np2 depois: %d\n\n", *p1, *p2);
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
    printf("p1 depois: %d\np2 depois: %d\n\n", *p1, *p2);
    printf("v1: %d\nv2: %d\n\n", v1, v2);
}