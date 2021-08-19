#include <stdio.h>


int main (){   int casos, i, R, B, C, X, Y, X1, Y1; 

    scanf ("%d", &casos);

    for ( i = 1; i <= casos; i++) {
        scanf ("%d %d", &X, &Y);
        X1 = X*X; Y1 = Y*Y;
        R = 9*X1 + Y1;
        B = 4*X1 + 25*Y1;   
        C = -100*X + Y1*Y;
        if (R > C && R > B) {
            printf ("Rafael ganhou\n"); }
        if (C > R && C > B) {
            printf ("Carlos ganhou\n"); }
        if (B > C && B > R) {
            printf ("Beto ganhou\n"); } }
}