#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int N, num;
    int sum = 0;
    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        sum = 0;
        for(int j = 0; j < N; j++){
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
    return 0;
}