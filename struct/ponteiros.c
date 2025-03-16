#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data *hoje; // apontando pro endereco de Data
    hoje = (struct Data *)malloc(sizeof(struct Data)); // alocando memoria
    // acessando membros de 'hoje' pelo ponteiro
    hoje->dia = 11;
    hoje->mes = 05;
    hoje->ano = 2005;
    printf("Data: %d/%d/%d", hoje->dia, hoje->mes, hoje->ano);
    free(hoje);
    hoje = NULL;

    printf("\n\n");

    struct Ponto *p; // p aponta pro endereco de Ponto
    p = (struct Ponto *)malloc(sizeof(struct Ponto)); // alocando 8 bytes = 64 bits
    p->x = 10;
    p->y = 5;
    printf("%d, %d", p->x, p->y);
    printf("\ntamanho da struct: %lu bytes", sizeof(struct Ponto));
    free(p);
    p = NULL;
}