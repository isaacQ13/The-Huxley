#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int b;
    float t,c,s,r;
    
    scanf("%d", &b);
    t=b*19.90;
    printf("%.2f\n", t);
    r=b/15;
    c=t*(0.08*r);
    printf("%.2f\n", c);
    s=(t/2)+c;
    printf("%.2f\n", s);
    
	return 0;
}