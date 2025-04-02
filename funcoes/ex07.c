#include <stdio.h>

int pot(int n, int e) {
    int res = 1;
    while (e--) 
        res *= n;
    return (res);
}

int main() {
    /*
    Escreva uma função potencia(base, expoente) que, quando chamada, retorna
    base expoente. Por exemplo, potencia(3, 4) deve retornar 81. Assuma que expoente é um
    inteiro maior ou igual a 1.
    */
    int a, b;
    scanf("%d %d", &a, &b);
    int res = pot(a, b);
    printf("%d\n", res);
}