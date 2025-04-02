#include <stdio.h>

int soma(int a, int b) {
    int res = a + b;
    return res;
}

int multiplicacao(int a, int b) {
    int res = a * b;
    return res;
}

int main() {
    /*
    Escreva uma função que receba dois números inteiros e retorne a soma dos
    mesmos e em outra função que receba dois números inteiros que retorne a
    multiplicação desses números. Faça o algoritmo que chame essas duas funções para
    somar e multiplicar dois números. Os dados devem ser solicitados ao usuário.
    */
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int res_soma = soma(n1, n2);
    int res_mult = multiplicacao(n1, n2);
    printf("res soma = %d\nres mult = %d\n", res_soma, res_mult);
}