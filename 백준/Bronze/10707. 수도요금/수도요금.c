#include<stdio.h>

int main(){
    int A, B, C, D, P;
    int X = 0;
    int Y = 0;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);
    X = A * P;
    if(P > C) Y = B + (D * (P - C));
    else Y = B;

    if(X > Y) printf("%d\n", Y);
    else printf("%d\n", X);

    return 0;
}