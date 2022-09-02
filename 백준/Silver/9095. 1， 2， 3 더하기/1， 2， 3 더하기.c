#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int dp[11] = {0,};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    int num = 0;

    for(int i = 0; i < T; i++){
        scanf("%d", &num);
        for(int i = 4; i <= num; i++){
            dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
        }
        printf("%d\n", dp[num]);
    }
    return 0;
}