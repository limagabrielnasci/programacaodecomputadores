#include <stdio.h>
#include <string.h>

int main() {
    /*
    Crie um programa que calcula o comprimento de uma string (use a função strlen) e
    escreva o seu tamanho
    */
    char string[100];
    scanf("%[^\n]s", string);
    int tam_string = strlen(string);
    printf("tamanho da string: %d\n", tam_string);
}