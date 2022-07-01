#include<stdio.h>

void fibbo(int n){
    long long num[90] = {0,};
    num[0] = 0;
    num[1] = 1;
    for(int i = 2; i <= n; i++){
        num[i] = num[i-1] + num[i-2];
    }
    printf("%lld", num[n]);
}
int main(){
    int N;
    scanf("%d", &N);
    fibbo(N);
    return 0;
}