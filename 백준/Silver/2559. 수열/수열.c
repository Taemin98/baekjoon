#include<stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int num[100000] = {0,};
    int num2[100000] = {0,};
    int temp = 0;
    int max = -100000000;

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        if(i == 0) num2[0] = num[i];
        else num2[i] = num2[i-1] + num[i];
    }
    for(int i = 0; i < N - K + 1; i++){
        temp = num2[i+K-1] - num2[i] + num[i];
        if(temp > max) max = temp;
    }
    printf("%d", max);
    return 0;
}