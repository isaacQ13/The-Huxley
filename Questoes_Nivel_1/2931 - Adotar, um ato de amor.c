#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade1, idade2;
    char e1,e2,e3,e4,e5,e6;
    scanf("%d %c %c %c", &idade1, &e1, &e2, &e3);
    scanf("%d %c %c %c", &idade2, &e4, &e5, &e6);
    if(idade1<18){
        printf("N�o pode adotar");
    }
    else if((idade1>=18) && (e1=='N') && (e2=='N') && (e3=='N') && (e4=='N') && (e5=='S') && (e6=='N')){
        printf("Pode adotar");
        
    }else{
    printf("N�o pode adotar");
    }
	return 0;
}