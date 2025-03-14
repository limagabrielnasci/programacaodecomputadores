#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

int main() {
    typedef float nota;
    nota prova01 = 3.3;
    printf("%f", prova01);

    printf("\n-----\n");

    data aniversario;

    aniversario.dia = 11;
    aniversario.mes = 05;
    aniversario.ano = 2005;

    printf("%d/%d/%d", aniversario.dia, aniversario.mes, aniversario.ano);
}