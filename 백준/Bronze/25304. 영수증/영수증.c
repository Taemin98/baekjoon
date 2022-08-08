#include<stdio.h>

int main(){
    int X, N;
    int x, n;
    int sum = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &x, &n);
        sum += x * n;
    }
    if(sum == X) printf("Yes");
    else printf("No");
    return 0;
}