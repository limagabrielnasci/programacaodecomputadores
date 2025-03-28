#include <stdio.h>

int main() {
	/*
	 Faça um algoritmo que leia dois números e mostre se são iguais. Se não forem
	 iguais, mostre o maior
	 */
	 int a, b;
	 scanf("%d", &a);
	 scanf("%d", &b);
	 if (a == b) {
		printf("iguais");
	 } else if (a > b) {
		printf("%d maior\n", a);
	 } else {
		printf("%d maior\n", b);
	 }
	 
}
