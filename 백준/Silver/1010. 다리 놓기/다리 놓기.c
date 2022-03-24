#include<stdio.h>

int main(){
    int n, m;
    int c;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d %d", &n, &m);
        long long result = 1;
        for(int j = 1; j <= n; j++){
            result *= m - j + 1;
            result /= j;
        }
        printf("%lld\n", result);
    }

    return 0;
}