#include <stdio.h>

// Função que imprime os divisores de um número (exceto ele mesmo)
void divisoresNumero(int num) {
    printf("Divisores de %d: ", num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numeros[10];

    // Entrada dos números pelo usuário
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Exibição dos divisores de cada número
    for (int i = 0; i < 10; i++) {
        divisoresNumero(numeros[i]);
    }

    return 0;
}

