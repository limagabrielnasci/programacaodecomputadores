#include <stdio.h>

int main() {
    /*
    Faça um algoritmo para ler e escrever o Nome de 20 pessoas
    */
    char nomes[20][100];
    int i;
    for (i = 0; i < 20; i++) {
        fgets(nomes[i], 100, stdin);
    }
    for(i = 0; i < 20; i++) {
        printf("%d. %s", i + 1, nomes[i]);
    }
}
