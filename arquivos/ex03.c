#include <stdio.h>

int main() {
    /*
    Escreva um programa em C que solicite ao usuário que digite um nome e salve esse
    nome em um arquivo chamado "nome.txt", caractere por caractere.
    */
    int i = 0;
    char c, nome[100];
    FILE *p;
    p = fopen("nome.txt", "w");
    if (p == NULL) {
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }
    while((c = getchar()) != '\n') {
        nome[i] = c;
        i++;
    }
    nome[i] = '\0';
    fprintf(p, "%s", nome);
    fclose(p);
}