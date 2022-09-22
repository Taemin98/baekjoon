//세금

#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int result1, result2;
    
    result1 = N * 0.78;
    result2 = N - (0.2 * N * 0.22);
    printf("%d %d", result1, result2);
    return 0;
}