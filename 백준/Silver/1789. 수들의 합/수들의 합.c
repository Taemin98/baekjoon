#include<stdio.h>

int main(){
    long long S;
    scanf("%lld", &S);
    long long N = 0;
    long long sum = 0;
    long long i = 1;
    while(sum < S){
        sum += i;
        i++;
        N++;
    }
    if(sum == S) printf("%lld\n", N);
    else printf("%lld\n", N - 1);
    return 0;
}