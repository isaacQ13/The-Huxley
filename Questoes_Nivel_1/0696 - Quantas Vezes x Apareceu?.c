#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, p=0, i=0, cont=0;

    int vec[11];

    scanf("%i", &numero);

    while(p <=10){

    vec[p] = numero;

    p++;

    scanf("%i", &numero);

    }

    for(i = 0; i <10; i++){

        if(vec[10] == vec[i]){
            cont++;
        }
    }

    printf("%i ", cont);

}