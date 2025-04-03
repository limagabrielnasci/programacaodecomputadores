#include <stdio.h>

int main() {
    /*
    Faça um programa (em C) que solicite ao usuário vinte valores do tipo float e os armazene em um arquivo de texto (valores.txt). Em seguida, lê estes valores do arquivo e os exibe na tela.
    */
    float valores[20];
    int i;
    FILE *p;
    p = fopen("valores.txt", "w");
    if (p == NULL) {
        printf("erro na abertura");
        return 1;
    }
    for (i = 0; i < 20; i++){
        scanf("%f", &valores[i]);
        fprintf(p, "%.2f\n", valores[i]);
    }
    fclose(p);
    p = fopen("valores.txt", "r");
    if (p == NULL) {
        printf("erro na abertura");
        return 1;
    }
    for (i = 0; i < 20; i++) {
        fscanf(p, "%f", &valores[i]);
        printf("%.2f\n", valores[i]);
    }
    fclose(p);
}