#include <stdio.h>

int main() {
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr           = %p\n", &ptr)

    *ptr = 73;

    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr           = %p\n", &ptr);
}

/*
Ponteiros:
*ptr : o apotando por, conteudo do endereco da variavel que ptr aponta
ptr : endereco da variavel
&ptr : endereco do ponteiro
*/
