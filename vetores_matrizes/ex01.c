#include <stdio.h>

int main() {
    /*
    Faça um algoritmo que, em um vetor, leia a nota de 10 alunos, calcule a média das
    notas e escreva a quantidade de alunos com notas maiores que a média.
    */
    float notas[10];
    int i, maior_q_media = 0, media, soma = 0;
    for (i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 10;
    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
            maior_q_media++;
        }
    }
    printf("notas maiores que a media: %d\n", maior_q_media);
}