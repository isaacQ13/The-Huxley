#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float numero, quantidade;
    int negativo, n;
    n=5;
    quantidade=0;
    negativo=0;
while(quantidade<n){
	quantidade = quantidade+1;
        printf("Digite um valor:\n");
         scanf("%f", &numero);
            if(numero<0){
            negativo=negativo+1;

            }
    }

    printf("Foram digitados %d numeros negativos", negativo);
	return 0;
}