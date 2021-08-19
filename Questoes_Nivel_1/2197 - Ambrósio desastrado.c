#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n[200], pedacos;
    char m[200];
    
    scanf("%d", &pedacos);
    for(int i = 0; i < pedacos; i++){
        scanf("%d %c", &n[i], &m[i]);
        
    }for(int i = 1; i <= pedacos; i++){
        for(int j = 0; j < pedacos; j++){
            if(n[j] == i){
                printf("%c", m[j]);
            }
        }
    }
    
    
	return 0;
}