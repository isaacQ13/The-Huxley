#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,nt,n2,nt2,nt3=1;
    
    printf("Digite um numero inteiro:");
     scanf("%d",&n1);
     n2=n1;
 if(n2>=0){  
    while(n2>=0){
            if(n2==0){
                break;
            }
            if(n2!=0){
            nt=n1*(n2-1);
            n2--;
            }
    nt2=nt+nt2;
    }
    printf("\nFatorial: %d",nt2);
}else
 printf("\nFatorial: %d",nt3);

	return 0;
}