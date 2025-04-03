#include <stdio.h>

void calcularMedia(float N1, float N2, float *MEDIA);

int main() {
    /*
    Faça um programa (em C) que leia dois números (N1 e N2), calcule e escreva a média aritmética desses números. A média é calculada através da chamada da função:

    void calculaMedia (float N1, float N2, float *MEDIA);

    Requisitos:

    ·         utilize passagem de parâmetros por referência;

    ·         o protótipo da função calculaMedia não pode ser mudado;

    ·         a média dos números deve ser escrita dentro do main().
    */
    float N1, N2, MEDIA;
    scanf("%f %f", &N1, &N2);
    calcularMedia(N1, N2, &MEDIA);
    printf("media = %.2f", MEDIA);
}

void calcularMedia(float N1, float N2, float *MEDIA) {
    *MEDIA = (N1 + N2) / 2;
}