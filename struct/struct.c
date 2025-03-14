#include <stdio.h>

struct aluno {
    int codigo;
    char nome[200];
    float nota;
} info_aluno;

struct end {
        char nome[100];
        char rua[100];
        char cidade[100];
        char estado[100];
        unsigned long int cep;
} info;

int main() {
    info.cep = 96010;
    printf("%d", info.cep);

    printf("\n-----\n");

    int i;
    char c;

    while ((c = getchar()) != '\n') {
        info.nome[i] = c;
        i++;
    }
    info.nome[i] = '\0';

    printf("\n-----\n");

    struct {
        int a;
        int b;
    } x, y;
    x.a = 10;
    y = x;
    printf("%d\n", y.a);

    for (int i = 0; info.nome[i] != '\0'; i++) {
        printf("%c", info.nome[i]);
    }
}