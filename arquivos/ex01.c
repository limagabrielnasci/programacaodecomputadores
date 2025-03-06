#include <stdio.h>

int main()
{
    FILE *fp;
    char carac[50];
    printf("o que tu quer no arquivo: ");
    fgets(carac, sizeof(carac), stdin);
    fp = fopen("frase.txt", "w");
    fprintf(fp, "%s", carac);
    fclose(fp);


}

