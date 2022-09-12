//RGB 거리
#include<stdio.h>

int min(int a, int b){
    if(a > b) return b;
    else return a;
}

int main(){
    int N;
    scanf("%d", &N);
    int RGB[1001][4] = {0,};
    int dp[1001][4] = {0,};
    int result = 1000 * 1000 + 1;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= 3; j++){
            scanf("%d", &RGB[i][j]);
        }
    }
    dp[1][1] = RGB[1][1]; 
    dp[1][2] = RGB[1][2]; 
    dp[1][3] = RGB[1][3]; 

    for(int i = 2; i <= N; i++){
        dp[i][1] = RGB[i][1] + min(dp[i-1][2], dp[i-1][3]);
        dp[i][2] = RGB[i][2] + min(dp[i-1][1], dp[i-1][3]);
        dp[i][3] = RGB[i][3] + min(dp[i-1][1], dp[i-1][2]);
    }
    for(int i = 1; i <= 3; i++){
        if(dp[N][i] < result) result = dp[N][i];
    }
    printf("%d", result);

    return 0;
}