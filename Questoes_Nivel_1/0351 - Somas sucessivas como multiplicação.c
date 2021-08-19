#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main(){

int n1, n2, nn1, nn2, soma = 0, p = 0;
scanf(" %d", &nn1);
scanf(" %d", &nn2);

    if(nn1 < nn2){
        n1 = nn1;
        n2 = nn2;
    }else{
        n1 = nn2;
        n2 = nn1;
    }   
    while (p != nn1){
        soma = soma + nn2;
        p = p + 1;
    }
        printf(" %d", soma);
        return 0;
}