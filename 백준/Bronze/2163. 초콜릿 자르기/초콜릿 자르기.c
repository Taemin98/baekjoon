#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int count = 0;

    if(N > M) {
        count += M - 1;
        count += (N - 1) * M; 
    }
    else {
        count += N - 1;
        count += (M - 1) * N; 
    }
    printf("%d", count);
    return 0;
}