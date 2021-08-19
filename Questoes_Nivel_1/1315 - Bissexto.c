#include <stdio.h>

int main() {
    int ano;

    scanf("%d" ,&ano);

    if(ano%4==0){
        if(ano%100==0){
            printf("Nao bissexto ");
        }else
            printf("Bissexto");
    }else
        printf("Nao bissexto");
    return 0;
}