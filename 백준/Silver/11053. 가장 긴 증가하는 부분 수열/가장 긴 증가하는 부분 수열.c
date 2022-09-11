//가장 긴 증가하는 부분의 수열
#include<stdio.h>

int Max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[1001] = {0,};
    int dp[1001] = {0,};
    int max = 0;
    int result = 0;

    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    dp[0] = 1;
    for(int i = 1; i <= N; i++){
        for(int j = i - 1; j >= 0; j--){
            if(arr[i] > arr[j]){
                if(dp[j] >= max) max = dp[j];
            }
        }
        dp[i] = max + 1;
        dp[i] = Max(dp[i], 1);
        max = 0;
    }
    for(int i = 1; i <= N; i++){
        if(dp[i] >= result) result = dp[i];
    }
    printf("%d\n", result);
    return 0;
}