#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  void classificacao(float nota1, int faltas){
        if((nota1>=9.5) && (faltas<=10)){
            printf("APROVADO COM LOUVOR");
        }else{
        }if((nota1>=7) &&(nota1<9.5) && (faltas<=10)){
            printf("APROVADO");
        }else{
        }if((nota1<7) && (faltas<=10)){
            printf("REPROVADO");
        }else{
        }if((nota1>=7) && (faltas>10)){
            printf("REPROVADO POR FALTAS");
        }else{
        }
    }
int main() {
    float c;
    int b;
    
    scanf("%f", &c);
    scanf("%d", &b);
    
    classificacao(c,b);
}