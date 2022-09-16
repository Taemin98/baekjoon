// 가장 긴 감소하는 수열
#include<stdio.h>

int Max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int N;
    scanf("%d", &N);
    int A[1001] = {0,};
    int dp[1001] = {0,};
    int max = 0;
    int result = 0;
    
    for(int i = 1; i <= N; i++) scanf("%d", &A[i]);

    for(int i = 1; i <= N; i++){
        for(int j = i - 1; j > 0; j--){
            if(A[i] < A[j]){
                if(dp[j] > max) max = dp[j];
            }
        }
        dp[i] = max + 1;
        dp[i] = Max(dp[i], 1);
        max = 0;
    }
   for(int i = 1; i <= N; i++){
        if(dp[i] > result) result = dp[i];
    }
    printf("%d", result);

    return 0;
}