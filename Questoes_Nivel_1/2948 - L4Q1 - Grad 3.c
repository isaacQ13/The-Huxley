#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char m[5][10];
    float tempo, distancia, menortempo;
    int flag = 1, x,y;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            scanf(" %c", &m[i] [j]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if(m[i] [j] == '1'){
                distancia = sqrt(pow(i,2)+pow(j,2));
                tempo = distancia*20;
                
            }
            if(m[i] [j] == '0'){
                distancia = sqrt(pow(i,2)+pow(j,2));
                tempo = distancia * 20 + 40;
            }
            if(m[i] [j] == '*'){
                tempo = 100000000;
            }  
            if(flag){
                menortempo = tempo;
                flag = 0;
                x = i;
                y = j;
            }
            if(menortempo > tempo){
                menortempo = tempo;
                x = i;
                y = j;
            }
        }
    }
    int confere = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if(m[i] [j] != '*'){
                confere = 1;
            }
        }
    }
    if(confere){
        printf("Vai la pro computador %d da fileira %d", y, x);
    }else
        printf("Tristemente voce vai ter que aturar os PCs do grad 4");
	return 0;
}