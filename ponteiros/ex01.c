#include <stdio.h>

int main() {
    /*
    Declare uma variável inteira 'num' e um ponteiro para inteiro 'ptr_num'. Atribua um
    valor a 'num' e faça 'ptr_num' apontar para o endereço de 'num'. Imprima o valor de
    'num' e o valor apontado por 'ptr_num'.
    */
    int num, *ptr_num;
    num = 50;
    ptr_num = &num;
    printf("valor de num: %d\n", num);
    printf("endereco da variavel num: %p\n", &num);
    printf("conteudo da variavel do ponteiro: %d\n", *ptr_num);
    printf("endereco que ptr_num aponta: %p\n", ptr_num);
}