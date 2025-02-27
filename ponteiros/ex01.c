#include <stdio.h>

int main()
{
    int num = 1;
    int *ptr_num;
    ptr_num = &num;
    printf("valor de num = %d\n", num);
    printf("valor apontado por ptr_num = %d\n", *ptr_num);
}
