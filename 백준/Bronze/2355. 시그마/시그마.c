#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    long long int sum = 0;
    sum = ((A + B) * (llabs(A - B) + 1)) / 2;
    printf("%lld", sum);
    return 0;
} 