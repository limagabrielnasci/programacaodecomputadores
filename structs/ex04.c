#include <stdio.h>
#include <string.h>
#define TAM 5

struct Aluno {
    char nome[100];
    char email[100];
    int dia, mes, ano;
    float notas[TAM];
};

int main() {
    /*
    Faça um algoritmo que defina uma struct chamada “Aluno” com as seguintes propriedades:
        ◦ nome: string
        ◦ email: string
        ◦ data de nascimento (dia, mês, ano): int
        ◦ vetor de notas (máximo 5): float
    Cadastrar uma lista (vetor) de 5 alunos conforme tipo definido acima e depois mostrar cada um deles. Mostrar também a média aritmética das notas de cada um dos alunos.
    */
    struct Aluno alunos[TAM];
    int i, j;
    float soma = 0, media = 0;
    for (i = 0; i < TAM; i++) {
        printf("Aluno %d: \n", i + 1);
        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Email: ");
        fgets(alunos[i].email, 100, stdin);
        alunos[i].email[strcspn(alunos[i].email, "\n")] = '\0';
        printf("Dia: ");
        scanf("%d", &alunos[i].dia);
        printf("Mes: ");
        scanf("%d", &alunos[i].mes);
        printf("Ano: ");
        scanf("%d", &alunos[i].ano);
        printf("Digite as 5 notas: \n");
        for (j = 0; j < TAM; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        printf("\n");
    }
    for (i = 0; i < TAM; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("\nEmail: %s", alunos[i].email);
        printf("\nData de nascimento: %d/%d/%d", alunos[i].dia, alunos[i].mes, alunos[i].ano);
        soma = 0;
        for (j = 0; j < TAM; j++) {
            printf("\nNota %d: %.2f", j + 1, alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        media = soma / TAM;
        printf("\nMedia: %.2f", media);
        printf("\n");
    }
}