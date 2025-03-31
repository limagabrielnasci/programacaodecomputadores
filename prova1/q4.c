#include <stdio.h>

int divisoresNumero(int n); // Protótipo da função

int main() {
    /*
    Faça um programa (em C) que leia 10 números e escreva para cada número lido os seus divisores (exceto ele mesmo). 
    Defina a função: divisoresNumero do tipo inteiro. 
    Faça também a função main() com a entrada das informações solicitadas pelo usuário, com o protótipo da função descrita acima e o desenvolvimento da função.
    */
    
    int vet[10], i, qtd;

    // Entrada dos números
    for (i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    printf("\n");
    // Processamento e saída dos divisores
    for (i = 0; i < 10; i++) {
        printf("Divisores de %d: ", vet[i]);
        qtd = divisoresNumero(vet[i]);  // Chamada da função
        printf("\nTotal de divisores = %d\n\n", qtd);
    }

    return 0;
}

// Função que encontra e imprime os divisores de um número (exceto ele mesmo)
int divisoresNumero(int n) {
    int i, c = 0;  // Inicializa contador

    for (i = 1; i < n; i++) {  // Percorre de 1 até n-1
        if (n % i == 0) {  
            printf("%d ", i);  // Imprime o divisor
            c++;  // Incrementa contador de divisores
        }
    }

    return c;  // Retorna a quantidade de divisores encontrados
}
