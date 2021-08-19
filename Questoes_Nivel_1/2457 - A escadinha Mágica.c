#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int maximo=0;
    scanf("%d", &maximo);
    if((maximo>=0) && (maximo<=40)){
        for(int m = 1; m <= maximo; m++){
            for(int final=1; final<m; final++){
            printf("%d ", final);
        } printf("%d\n", m);
    }
}
       
	return 0;
}