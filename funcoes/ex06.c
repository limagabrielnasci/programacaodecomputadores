#include <stdio.h>
#include <stdlib.h>

void maior_menor(int n, int *vet, int *maior, int *menor) {
    int i;

    *maior = vet[0];
    *menor = vet[0];

    for (i = 0; i < n; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
    }
}

int main() {
    /*
    Crie uma função que receba um vetor de números inteiros e seu tamanho, e retorne o maior e o menor número, passando-os por referência.
    */
    int i, n, *vetor, maior, menor;
    printf("tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("nao foi possivel alocar memoria.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    maior_menor(n, vetor, &maior, &menor);
    printf("maior: %d\nmenor: %d\n", maior, menor);
    free(vetor);
}