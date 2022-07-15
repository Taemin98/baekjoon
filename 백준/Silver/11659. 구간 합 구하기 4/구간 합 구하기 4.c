#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int num[100000] = {0,};
    int prefix[100000] = {0,};
    for(int a = 0; a < N; a++) scanf("%d", &num[a]);
    prefix[0] = num[0];
    for(int b = 1; b < N; b++) prefix[b] = prefix[b-1] + num[b];
    int i, j;
    for(int c = 0; c < M; c++){
        scanf("%d %d", &i, &j);
        printf("%d\n", prefix[j-1] - prefix[i-1] + num[i-1]);
    }
    return 0;
}