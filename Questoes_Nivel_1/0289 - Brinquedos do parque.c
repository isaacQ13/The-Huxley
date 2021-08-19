#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int altura,idade,br1,br2,br3,quantidade;
    
    scanf("%d %d", &altura, &idade);
    if(altura>=150 && idade>=12) {
        br1=1;
    }else {
        br1=0;
    }if(altura>=140 && idade>=14) {
        br2=1;
    }else {
        br2=0;
    }if(altura>=170 || idade>=17) {
        br3=1;
    }else {
        br3=0;
    }
    quantidade=br1+br2+br3;
    printf("%d",quantidade);
    
	return 0;
}