#include <stdio.h>
#include <string.h>

int main() {
    /*
    Crie um programa que recebe uma string como parâmetro e retorna o número de
    caracteres nela. Utilize ponteiros para percorrer a string.
    */
    char string[100], *p;
    int i, tam_string = 0;
    p = string;
    scanf("%[^\n]s", string);
    while (*p != '\0') {
        tam_string++;
        p++;
    }
    printf("\ntamanho da string = %d\n", tam_string);
}