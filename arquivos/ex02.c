#include <stdio.h>

int main()
{
    int fecha;
    FILE *fp = fopen("frase.txt", "r");
    char nome[50];
    if (fp == NULL) {
        printf("erro ao abrir arquivo");
        return 0;
    }
    fscanf(fp, "%s", nome);
    printf("%s", nome);
    fclose(fp);
    if (fecha == 0) {
        printf("\nsucesso ao fechar");
    } else {
        printf("\nerro no fechamento");
    }
}
