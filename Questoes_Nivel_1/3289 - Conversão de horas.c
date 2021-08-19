#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int hora, minuto;
    
    
    scanf("%d:%d", &hora, &minuto);
    while(hora>=0){
    
   
    if(hora >= 0 && hora < 12){
            printf("%d:%d A.M\n", hora, minuto);
    }else if(hora == 12){
            printf("%d:%d P.M\n", hora, minuto);
    }else if(hora == 24){
        printf("0:%d A.M\n", minuto);
    }
    if(hora > 12 && hora <= 23){
             hora = hora - 12;
             printf("%d:%d P.M\n", hora, minuto);
}

             scanf("%d:%d", &hora, &minuto);
            
        }
   
    

	return 0;
}