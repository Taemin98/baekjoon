//다이나믹이 뭐에요?
#include<stdio.h>
#define NUM 1000000007

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    long long int dp[1001][1001] = {0,};
    dp[1][1] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i*j != 1) dp[i][j] = (dp[i-1][j-1]%NUM + dp[i-1][j]%NUM + dp[i][j-1]%NUM)%NUM;
            else dp[i][j] = 1;
        }
    }
    printf("%lld", dp[n][m]%NUM);
    return 0;
}