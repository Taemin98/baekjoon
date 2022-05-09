#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int multi;
    int result = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &multi);
        result += multi - 1;
    }
    printf("%d", result+1);
    return 0;
}