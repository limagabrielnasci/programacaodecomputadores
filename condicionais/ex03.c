#include <stdio.h>

int main() {
    /*
    Faça um algoritmo que leia a média e a frequência de um aluno e mostre se ele foi
    aprovado. Os critérios de aprovação são:
    - Se a média for maior ou igual a 7.0 e a frequência maior que 75 então aluno está
    aprovado.
    - Se a média for maior que 9.0 o aluno é aprovado com qualquer frequência. 
    - Se a média for maior que 5.0 e frequência maior ou igual a 75 então o aluno fica para
    recuperação. 
    */
    float media, frequencia;
    scanf("%f", &media);
    scanf("%f", &frequencia);
    if (media >= 7 && frequencia >= 75) {
        printf("aprovado\n");
    } else if (media > 9 && frequencia < 75) {
        printf("aprovado, porem sem frequencia\n");
    } else if (media > 5 && media < 7 && frequencia >= 75) {
        printf("exame\n");
    }
}