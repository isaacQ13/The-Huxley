#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int multiplos(int i,int f,int x){
int num;
num=0;
   for(i; i<=f; num++){
       if(i%x==0)
       printf("%d\n", i);
       i++;
   }
   
}


void main(){
    int i,f,x;
    scanf("%d %d %d",&i,&f,&x);
    multiplos(i,f,x);
}