#include <stdio.h>
#include <stdlib.h>

int main(){
   int n;
   int soma=0, qtpacotes, sobra;
   float  v;

   scanf("%d", &n);
       while( n%2 ==0){
            soma = soma + n;
            scanf("%d", &n);
   }
   qtpacotes = (soma/12) + 1;
   sobra = qtpacotes*12 - soma;
   v = qtpacotes*(7.89);

   printf("%.2f\n", v);
   printf("%d\n", sobra);
}