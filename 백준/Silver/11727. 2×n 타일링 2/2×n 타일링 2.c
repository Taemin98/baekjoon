#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int block[1000] = {0,};
    block[0] = 1;
    block[1] = 3;
    int result = 0;
    for(int i = 2; i < n; i++){
        block[i] =( block[i-1] + block[i-2] * 2) % 10007;
    }
    printf("%d", block[n-1]);
    return 0;
}