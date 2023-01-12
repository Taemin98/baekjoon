//특식배부
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int result = 0;

    if(A >= N) result += N; else result += A;
    if(B >= N) result += N; else result += B;
    if(C >= N) result += N; else result += C;

    printf("%d", result);

    return 0;
}