#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int V=0;
    float vl;
    int t=0;
    float m=12.89;
    int vd;
    for(;;)
    {
        scanf("%d",&V);
        if(V==999)
        break;
        if(V>2)
        {

        vd=V-2;
        vl=vl+(vd*m);
        t++;
        }
    }
    printf("%.2f\n",vl);
    printf("%d\n",t);
	return 0;
}