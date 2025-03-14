#include <stdio.h>

enum meses {
    janeiro = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez
};

int main() {
    int mes_corrente;
    int soma, dif;
    enum meses fim, dig;

    printf("mes corrente (1 a 12): ");
    scanf("%d", &mes_corrente);

    dig = mes_corrente;
    printf("mes digitado %d ", dig);

    fim = dez;

    soma = mes_corrente;
    dif = (int)fim - mes_corrente;
    printf("\n%d meses a menos, pois falta %d para acabar este ano.\n", soma, dif);
}