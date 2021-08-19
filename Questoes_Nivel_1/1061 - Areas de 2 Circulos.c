#include<stdio.h>

int main(){
    float c1,c2,pi=3.14;

    scanf("%f",&c1);
    scanf("%f",&c2);

    c1=pi* (c1*c1);
    c2=pi* (c2*c2);

    if(c1>c2){
        printf("Primeiro circulo");
    }else if(c2>c1){
        printf("Segundo circulo");
    }else
        printf("Iguais");
    return 0;
}