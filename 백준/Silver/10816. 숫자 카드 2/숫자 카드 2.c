#include<stdio.h>

int card[20000001] = {0,};
int check[20000001] = {0,};

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &card[i]);
        check[card[i] + 10000000]++;
    }
    int M;
    int get;
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &get);
        printf("%d ", check[get + 10000000]);
    }
    return 0;
}