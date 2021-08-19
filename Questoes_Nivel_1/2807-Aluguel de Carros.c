#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    	double total, d, km;

		printf("Digite a quantidade de dias de locacao:\n");
		scanf("%lf", &d);
	d = d*30;
		printf("Digite a quantidade de km rodados:\n");
		scanf("%lf", &km);
	km = km*0.01;
	total = km + d;
	total = total-(total*0.1);
		printf("Valor a pagar pelo aluguel: R$ %lf", total);

	return 0;
}
