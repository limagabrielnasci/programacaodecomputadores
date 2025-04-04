#include <stdio.h>

int main() {
    /*
    Escreva um programa em C que leia o conteúdo do arquivo "frase.txt" e imprima na tela.
    */
    char frase[100];
    FILE *p;
    p = fopen("frase.txt", "r");
    if (p == NULL) {
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }
    fgets(frase, 100, p);
    fclose(p);
    printf("conteudo do arquivo: %s", frase);
}