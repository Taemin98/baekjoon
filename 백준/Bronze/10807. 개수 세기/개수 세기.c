//개수 세기
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int num[100] = {0,};
    int V;
    int count = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }
    scanf("%d", &V);

    for(int i = 0; i < N; i++){
        if(num[i] == V) count++;
    }
    printf("%d", count);

    return 0;
}