#include <stdio.h>

// Fun��o que imprime os divisores de um n�mero (exceto ele mesmo)
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

    // Entrada dos n�meros pelo usu�rio
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Exibi��o dos divisores de cada n�mero
    for (int i = 0; i < 10; i++) {
        divisoresNumero(numeros[i]);
    }

    return 0;
}

