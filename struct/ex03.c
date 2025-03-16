#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos {
    int matricula;
    char nome[100];
    float n1;
    float n2;
    float n3;
};

int main() {
    struct Alunos *alunos[5];
    int i;
    float media = 0.0, soma_n1 = 0.0, soma_n2 = 0.0, soma_n3 = 0.0, soma_geral = 0.0;

    // alocando memoria para cada aluno
    for(i = 0; i < 5; i++) {
        alunos[i] = (struct Alunos*)malloc(sizeof(struct Alunos));
        if (alunos[i] == NULL) {
            printf("Não foi possível alocar memória.");
            return 1;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("\nMatrícula do %dº aluno: ", i + 1);
        scanf("%d", &alunos[i]->matricula);
        getchar(); // limpar buffer

        printf("Nome do %dº aluno: ", i + 1);
        fgets(alunos[i]->nome, sizeof(alunos[i]->nome), stdin);
        alunos[i]->nome[strcspn(alunos[i]->nome, "\n")] = '\0';

        printf("Primeira nota do %dº aluno: ", i +  1);
        scanf("%f", &alunos[i]->n1);
        getchar();

        printf("Segunda nota do %dº aluno: ", i +  1);
        scanf("%f", &alunos[i]->n2);
        getchar();

        printf("Terceira nota do %dº aluno: ", i +  1);
        scanf("%f", &alunos[i]->n3);
        getchar();

        soma_n1 += alunos[i]->n1;
        soma_n2 += alunos[i]->n2;
        soma_n3 += alunos[i]->n3;
    }

    float maior_nota = 0.0;
    for (int i = 0; i < 5; i++) {
        if (alunos[i]->n1 > maior_nota) {
            maior_nota = alunos[i]->n1;
        }
    }

    soma_geral = soma_n1 + soma_n2 + soma_n3;
    media = soma_geral / 15;
    float maior_media = 0.0, menor_media = 99999;
    
    for (i = 0; i < 5; i++) {
        float mediaAluno = (alunos[i]->n1 + alunos[i]->n2 + alunos[i]->n3) / 3;

        if (mediaAluno > maior_media) {
            maior_media = mediaAluno;
        }

        if (mediaAluno < menor_media) {
            menor_media = mediaAluno;
        }
    }

    // Verificando se cada aluno foi aprovado ou reprovado
    printf("\nSituação dos alunos:\n");
    for (i = 0; i < 5; i++) {
        float mediaAluno = (alunos[i]->n1 + alunos[i]->n2 + alunos[i]->n3) / 3;
        if (mediaAluno >= 7.0) {
            printf("%s (Matrícula: %d) - Média: %.2f - Aprovado\n", alunos[i]->nome, alunos[i]->matricula, mediaAluno);
        } else {
            printf("%s (Matrícula: %d) - Média: %.2f - Reprovado\n", alunos[i]->nome, alunos[i]->matricula, mediaAluno);
        }
    }

    printf("\nMaior nota da primeira prova: %.2f", maior_nota);
    printf("\nMaior média geral: %.2f\n", maior_media);
    printf("\nMenor média geral: %.2f\n", menor_media);

    for (i = 0; i < 5; i++) {
        free(alunos[i]);
    }
}