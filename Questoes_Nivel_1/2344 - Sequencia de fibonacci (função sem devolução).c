#include <stdio.h>

int main()
{
    //DEFININDO VARIAVEIS
    int num, f1 = 0, 
        f2 = 1, 
        f3,
        i = 0;

    int aberto = 1;

    scanf("%i", &num);

    if (num < 0)
    {
        printf("O valor digitado � incorreto...\n");
    }
    
    printf("1\n");
    for(i = 1; i < num; i++)
    {
        
        f3 = f2 + f1;
        printf("%i\n", f3);
        f1 = f2;
        f2 = f3;
            
    }



    return 0;
}