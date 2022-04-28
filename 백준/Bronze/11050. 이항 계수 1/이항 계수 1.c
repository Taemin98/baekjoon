#include<stdio.h>

int main(){
    int N, K;
    int numerator = 1;
    int denominator = 1;
    int result;
    scanf("%d %d", &N, &K);
    for(int i = K; i > 0; i--) numerator *= i;
    for(int i = N; i >= N-K+1; i--) denominator *= i;
    result = denominator / numerator;
    printf("%d", result);
    return 0;
}