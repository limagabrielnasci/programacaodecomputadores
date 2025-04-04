#include <stdio.h>
#include <string.h>
#define TAM 3

struct Pessoas {
    char nome[100];
    int idade;
};

int main() {
    /*
    Faça um programa que receba três nomes e as idades das respectivas pessoas (idades acima de 45 anos devem ser rejeitados) e armazene em um vetor. Após o recebimento, listar os 3 nomes e idades que nela foram armazenados.
    */
    struct Pessoas pessoa[TAM];
    int i, id;
    for (i = 0; i < TAM; i++) {
        printf("nome pessoa %d: ", i + 1);
        fgets(pessoa[i].nome, 100, stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
        do {
            printf("idade pessoa %d (nao pode ser acima de 45): ", i + 1);
            scanf("%d", &id);
            if (id > 45)
                printf("acima de 45! preencha de novo!\n");
            if (id <= 45) 
                pessoa[i].idade = id;
        } while (id > 45);
    }
    for (i = 0; i < TAM; i++) {
        printf("\npessoa %d:\n", i + 1);
        printf("nome: %s\n", pessoa[i].nome);
        printf("idade: %d\n", pessoa[i].idade);
    }
}