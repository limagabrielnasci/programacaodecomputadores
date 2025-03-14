#include <stdio.h>

union varios_tipos {
    char c;
    int i;
    float f;
    double d; // A união ocupa o espaço do maior membro (aqui seria o double, que normalmente ocupa 8 bytes).
} tdata;


int main() {
    tdata.c = 'b';
    printf("%c\n", tdata.c);
    tdata.i = 1234;
    printf("%d\n", tdata.i);
    tdata.f = 12.34;
    printf("%f\n", tdata.f);
    tdata.d = 123456.78E+12;

    printf("\n------\n");

    printf("%lf\n", tdata.d);
    printf("\n%c\n", tdata.c);
    printf("%d\n", tdata.i);
    printf("%f\n", tdata.f);
    printf("%lf\n", tdata.d);

    printf("\nTamanho da união é %d bytes", sizeof(union varios_tipos));
}