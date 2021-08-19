#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1;double d;
    
    scanf("%d", &n1);
    printf("%d\n", n1/12);
    d=n1;
    d=d/12;
    d=d*8.35;
    printf("%.2f", d);
    
	return 0;
}