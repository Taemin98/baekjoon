#include<stdio.h>

int nCk[1001][1001];

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= k; j++){
            if(i == 0 || j == 0) nCk[i][j] = 1;
            else if(i == j) nCk[i][j] = 1;
            else nCk[i][j] = (nCk[i-1][j-1] + nCk[i-1][j]) % 10007;
        }
    }
    printf("%d", nCk[n][k]);
    return 0;
}