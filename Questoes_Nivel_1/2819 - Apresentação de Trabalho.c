#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c,d,e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    if(a==1 || b==1){
        if(c==1 && d==1){
            if(e==1){
                printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
                printf("Seu trabalho sera avaliado.");
            }else{
                printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
                printf("Seu trabalho nao sera avaliado, nota 0.");
            }
        }else{
                printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
                printf("Seu trabalho nao sera avaliado, nota 0.");
        }
    }else{
                printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
                printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
                printf("Seu trabalho nao sera avaliado, nota 0.");
    }
    
	return 0;
}