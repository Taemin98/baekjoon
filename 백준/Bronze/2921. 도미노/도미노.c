#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int sum = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 0; j <= i; j++){
            sum = sum + i + j;
        }
    }
    printf("%d", sum);

    return 0;
}