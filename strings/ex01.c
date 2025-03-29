#include <stdio.h>

int main() {
    // Faça um programa que leia uma string e a imprima
    char string[100];
    scanf("%[^\n]s", string); // lê espaço
    printf("%s\n", string);
}