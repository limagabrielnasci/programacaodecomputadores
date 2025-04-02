#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Dinamicamente aloque memória para dois arrays de inteiros, 'array1' e 'array2'.
    Preencha esses arrays com valores e, em seguida, some os elementos
    correspondentes dos arrays, armazenando o resultado em um terceiro array 'soma'.
    Imprima os resultados e libere a memória alocada.
    */
    int i, n, *arr1, *arr2, *inicioa1, *inicioa2, *inicio_soma, *soma;
    printf("quantos inteiros quer alocar? ");
    scanf("%d", &n);
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    soma = (int *)malloc(n * sizeof(int));
    if (arr1 == NULL || arr2 == NULL || soma == NULL) {
        printf("nao foi possivel alocar memoria.\n");
        exit(1);
    }
    // guardando ponteiros originais
    inicioa1 = arr1;
    inicioa2 = arr2;
    inicio_soma = soma;

    for (i = 0; i < n; i++, arr1++) {
        scanf("%d", arr1);
    }
    arr1 = inicioa1; // restaurando o ponteiro

    for (i = 0; i < n; i++, arr2++) {
        scanf("%d", arr2);
    }
    arr2 = inicioa2; // restaurando o ponteiro

    for (i = 0; i < n; i++, arr1++, arr2++, soma++) {
        *soma = *arr1 + *arr2; 
    }
    soma = inicio_soma; // restaurando o ponteiro

    for (i = 0; i < n; i++, soma++) {
        printf("%d\n", *soma);
    }

    free(inicioa1);
    free(inicioa2);
    free(inicio_soma);
}