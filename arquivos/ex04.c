#include <stdio.h>

int main() {
    /*
    Escreva um programa em C que leia o conteúdo, caractere por caractere, do arquivo
    "nome.txt" e imprima na tela.
    */
    char c;
    int i;
    FILE *p;
    p = fopen("nome.txt", "r");
    if (p == NULL) {
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }
    while ((c = fgetc(p)) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    fclose(p);
}