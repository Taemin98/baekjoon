#include<stdio.h>

int main(){
    int N, T;
    int C, P;
    scanf("%d %d %d %d", &N, &T, &C, &P);
    if(N % T != 0) printf("%d", N / T * C * P);
    else printf("%d", (N / T - 1) * C * P);
    return 0;
}