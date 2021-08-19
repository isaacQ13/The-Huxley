#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, p;

    scanf("%d", &n);

    while(i <= n){

        for(p =0; p <i; p++){
            printf("%d", i);
        }
        printf("\n");
        i++;
    }
}