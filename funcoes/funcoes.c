#include <stdio.h>

//int soma(int a, int b);
int soma(int b);
int soma_um();
int pot(int n, int e);
int a; // variavel global
int total = 0;


int main() {
    a = 5;
    int b = 6;
    int resultado = soma(b);
    printf("soma = %d", resultado);

    printf("\n---\n");

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", soma_um());
    }

    printf("\n---\n");

    int t = 2;
    printf("%d %d %d", t, total, pot(t, 5), total);

}

/*int soma(int a, int b) {
    int c;
    c = a + b;
    return c;
}*/

int soma(int b) {
    a += b;
    return a;
}

int soma_um(void) {
    // int num = 0;
    static int num = 0;
    return ++num;
}

int pot(int n, int e){
    total = n;
    for (; e > 1; e--) {
        total = total * n;
    }
    return total;
}


