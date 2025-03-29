#include <stdio.h>

int main() {
    // Faça um programa que receba uma palavra e a imprima de trás para frente.
    char palavra[100], invertida[100];
    int i, tam_string = 0;
    scanf("%[^\n]s", palavra);
    for (i = 0; palavra[i] != '\0'; i++) {
        tam_string++;
    }
    for (i = 0; i < tam_string; i++) {
        invertida[i] = palavra[tam_string - 1 - i]; 
    }
    invertida[tam_string] = '\0';
    printf("%s\n", invertida);
}