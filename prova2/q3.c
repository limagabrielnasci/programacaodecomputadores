#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[100];
    float media;
};

int main() {
    /*
        Faça um programa (em C) que defina uma struct chamada Aluno:

    Estrutura:             
    
    matrícula: int;

    nome: string;

    media: float;

    Requisitos:

    ·         O programa deverá ler a quantidade de alunos do teclado e alocar dinamicamente memória;

    ·         Preencha as informações de cada aluno (matricula, nome e notas), conforme a quantidade alocada;

    ·         Imprima os dados de cada aluno;

    Libere a memória alocada dinamicamente.
    */
    int i, qtd_alunos = 0;
    printf("Quantidades de alunos para adicionar: ");
    scanf("%d", &qtd_alunos);
    struct Aluno *alunos;
    alunos = (struct Aluno *)malloc(qtd_alunos * sizeof(struct Aluno));
    if (alunos == NULL) {
        printf("nao foi possivel alocar memoria");
        return -1;
    }
    for (i = 0; i < qtd_alunos; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Media: ");
        scanf("%f", &alunos[i].media);
    }
    printf("\nDADOS DOS ALUNOS\n");
    for (i = 0; i < qtd_alunos; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Media: %.2f\n", alunos[i].media);
    }
    free(alunos);
}