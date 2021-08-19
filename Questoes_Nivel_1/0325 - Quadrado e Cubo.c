#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero;
    
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++){
        printf("%d %d %d\n", i , i*i, i*i*i);
    }
    
    
    
    
	return 0;
}