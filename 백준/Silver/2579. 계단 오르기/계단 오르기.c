//계단오르기
#include<stdio.h>

int max(int A, int B){
    if(A > B) return A;
    else return B;
}

int main(){
    int N;
    scanf("%d", &N);
    int step[300] = {0,};
    int dp[300] = {0,};

    for(int i = 0; i < N; i++) scanf("%d", &step[i]);
    dp[0] = step[0];
    dp[1] = dp[0] + step[1];
    dp[2] = max(step[1] + step[2], step[0] + step[2]);
    for(int i = 3; i < N; i++){
        dp[i] = max(dp[i-2] + step[i], dp[i-3] + step[i-1] + step[i]);
    }
    printf("%d", dp[N-1]);
    return 0;
}