#include <stdio.h>

int soma_dobro (int *a, int *b);

int main() {
    int x = 5, y = 3, result;
    result = soma_dobro(&x,&y);
    printf("Soma eh: %d \n", result);
    printf("x= %d, y= %d ", x, y);
    return 0;
}

int soma_dobro (int *a, int *b){
    int c;
    *a = *a * 2;
    *b = *b * 2;
    c = *a + *b;
    return c;
}
