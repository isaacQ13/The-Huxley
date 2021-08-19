#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    	int numero;

	printf("Digite um numero:\n"); scanf("%d", &numero); numero=(numero%10); printf("Algarismo das unidades: %d", numero);
	return 0;
}