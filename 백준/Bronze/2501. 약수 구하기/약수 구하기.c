#include<stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int divisor[10000] = {0,};
    divisor[0] = 0;
    int count = 0;

    for(int i = 1; i <= N; i++){
        if(N % i == 0) divisor[i] = 1;
    }

    for(int i = 1; i <= N; i++){
        if(divisor[i] == 1){
            count++;
            if(K == count){
                printf("%d\n", i);
                break;
            }
        }
    }
    if (K > count) printf("%d\n", 0);
    return 0;
}