#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;

   p = (int *)malloc(50 * sizeof(int));
   if (p == NULL) {
        printf("nao foi possivel alocar memoria");
        return 1;
   }
   printf("%lu", 50 * sizeof(int));

   p = (int *)realloc(p, 10 * sizeof(int));
   if (p == NULL) {
        printf("nao foi possivel alocar memoria");
        return 1;
    }

    printf("\n%lu", 10 * sizeof(int));
    free(p);

}
