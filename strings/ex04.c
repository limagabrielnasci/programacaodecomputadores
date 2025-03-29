#include <stdio.h>

int main() {
    /*
    Faça um programa que entre com um nome e imprima o nome somente se a
    primeira letra do nome for ‘a’.
    */
    char nome[100];
    scanf("%[^\n]s", nome);
    if (nome[0] == 'a') {
        printf("%s\n", nome);
    } else {
        return 1;
    }
}