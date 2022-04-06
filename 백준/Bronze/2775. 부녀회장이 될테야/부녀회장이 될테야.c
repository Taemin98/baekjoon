#include<stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    int k, n;

    for(int i = 0; i < c; i++){
        scanf("%d", &k);
        scanf("%d", &n);
        int sum[k+1][n];
        for(int z = 0; z < n; z++) sum[0][z] = z + 1;
        for(int y = 0; y <= k; y++) sum[y][0] = 1;
        for(int a = 1; a <= k; a++){
            for(int b = 1; b < n; b++){
                sum[a][b] = sum[a-1][b] + sum[a][b-1];
            }
        }
        printf("%d\n", sum[k][n-1]);
    }
    return 0;
}