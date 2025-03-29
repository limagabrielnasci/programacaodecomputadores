#include <stdio.h>

int main() {
    /*
    Crie um programa que calcula o comprimento de uma string (não use a função
    strlen) e escreva o tamanho dela.
    */
    char string[100];
    int i, tamanho_string = 0;
    scanf("%[^\n]s", string);
    for (i = 0; string[i] != '\0'; i++) {
        tamanho_string++;
    }
    printf("tamanho da string: %d\n", tamanho_string);
}