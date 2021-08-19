#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor, media, quantidade = 0,soma=0;
    
    while(valor!=0){
        scanf("%d", &valor);
        if(valor!=0){
            quantidade=quantidade+1;
        }else{
    }
    soma=valor+soma;
    media=soma/quantidade;
    }
        if(media<110){
        printf("Glicose Normal");
        }else if(media>=200){
            printf("Glicose Muito Alta");
        }else{
            printf("Glicose Alterada");
            }
        return 0;
}