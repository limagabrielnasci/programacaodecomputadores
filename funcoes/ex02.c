#include <stdio.h>

int dividir(int a, int b) {
    if (b == 0) {
        printf("nao eh possivel dividir por 0.\n");
        return -1;
    }
    return a / b;
}
int subtrair(int a, int b) {
    return a - b;
}

int main() {
    /*
    Escreva também as funções para dividir e subtrair dois números inteiros informados
    pelo usuário.
    */
    int a, b;
    scanf("%d %d", &a, &b);
    int res_div = dividir(a, b);
    int res_subtracao = subtrair(a, b);
    if (res_div != -1) {
        printf("res divisao = %d\n", res_div);
    }
    printf("res subtracao = %d\n", res_subtracao);
}