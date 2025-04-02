#include <stdio.h>
#include <math.h>

float calcular(float x1, float y1, float x2, float y2) {
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

int main() {
    /*
    Escreva uma função que calcule e retorne a distância entre dois pontos ( x1, y1) e
    (x2, y2). Todos os números e valores de retorno devem ser do tipo float.
    Obs. Adicione a biblioteca .math no include para utilizar a função sqrt (raíz
    quadrada).
    */
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    float res = calcular(x1, y1, x2, y2);
    printf("resultado = %.2f", res);
}