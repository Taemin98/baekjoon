#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    N = N / 4 - 1;
    for(int i = 0; i < N; i++) printf("long ");
    printf("long int");
    return 0;
}