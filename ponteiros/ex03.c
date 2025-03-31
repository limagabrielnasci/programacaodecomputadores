#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Dinamicamente aloque memória para um array de 5 inteiros. Atribua valores a
    esses inteiros e, em seguida, libere a memória alocada. Imprima os valores antes
    e depois da liberação de memória.
    */
    int i, *p, *inicio;
    if ((p = (int *)malloc(5 * sizeof(int))) == NULL) {
        printf("Nao foi possivel alocar a memoria.\n");
        exit(1);
    }
    inicio = p;
    for (i = 0; i < 5; i++, p++) {
        scanf("%d", p);
    }
    p = inicio;
    for (i = 0; i < 5; i++, p++) {
        printf("%d\n", *p);
    }
    free(inicio);
}