#include <stdio.h>

int main() {
    /*
    Dado uma série de 20 valores reais, faça um algoritmo que calcule e escreva a
    média aritmética destes valores, entretanto se a média obtida for maior que 8
    deverá ser atribuída 10 para a média.
    */
    float valores[20], soma = 0, media = 0;
    int i;
    for (i = 0; i < 20; i++) {
        scanf("%f", &valores[i]);
        soma += valores[i];
    }
    media = soma / 20;
    if (media > 8) {
        media = 10;
    }
    printf("media: %.2f\n", media);
}