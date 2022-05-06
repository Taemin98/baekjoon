#include<stdio.h>

int main(){
    int K, N, M;
    int result;
    scanf("%d %d %d", &K, &N, &M);
    result = K * N - M;
    if(result <= 0) printf("%d", 0);
    else printf("%d", result);
    return 0;
}