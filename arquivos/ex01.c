#include <stdio.h>

int main() {
    /*
    Escreva um programa em C que solicite ao usuário que digite uma frase e salve essa
    frase em um arquivo chamado "frase.txt".
    */
    int i;
    char frase[100];
    FILE *p;
    p = fopen("frase.txt", "w");
    if (p == NULL) {
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }
    fgets(frase, 100, stdin);
    fprintf(p, "%s", frase);
    fclose(p);
}