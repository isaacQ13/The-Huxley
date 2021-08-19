#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int portugues, matematica, aprovados = 0;
    float redacao;
    
    while(portugues>0){
        scanf("%d", &portugues);
        scanf("%d", &matematica);
        scanf("%f", &redacao);
            if((portugues>=40) && (matematica>=21) && (redacao>=7)){
                aprovados=aprovados+1;
            }else{
                
            }
                
    }
    printf("%d", aprovados);
	return 0;
}