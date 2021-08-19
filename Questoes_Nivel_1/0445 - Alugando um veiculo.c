#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d,km;
    float v;
    
    scanf("%d",&d);
    scanf("%d",&km);
    
    if(km <= 100*d){
        v=90*d;
        printf("%.2f", v);
    }else{
    v=90*d +12*(km-100*d);
    printf("%.2f",v);
    }
	return 0;
}