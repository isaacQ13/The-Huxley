#include <stdio.h>
#include <stdlib.h>

int main(){
    int ProgII[45], ProgIII[30], i, j;

    for (i=0; i<45; i++){
        scanf("%d", &ProgII[i]);
    }
    for (i=0; i<30; i++){
        scanf("%d", &ProgIII[i]);
    }

    for (i=0; i<45; i++){
        for (j=0; j<30; j++){
            if (ProgII[i] == ProgIII[j]){
                printf("%d ", ProgII[i]);
            }
        }
    }
    printf("\n");

    system("pause");
    return 0;
}