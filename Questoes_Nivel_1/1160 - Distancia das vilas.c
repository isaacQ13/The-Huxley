#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int distancia(void){
float p,q,r,s,b;
float dsh,dsk,dss;

scanf("%f %f",&p, &q);

dsh=((p-34)*(p-34) + (q-220)*(q-220));
dsk=((p-0)*(p-0) + (q-0)*(q-0));
dss=((p-140)*(p-140) + (q-456)*(q-456));

r=sqrt(dsh);
s=sqrt(dsk);
b=sqrt(dss);

printf("Distancia para Hogsmeade: %.2f\n",r);

printf("Distancia para Kakariko: %.2f\n",s);

printf("Distancia para Solitude: %.2f\n",b);

}
int main() {
     distancia();
	return 0;
}