#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        if(i == 0){
            for(int j = 0; j < N-i-1; j++) printf(" ");
            printf("*");
        }
        else if(i != N - 1){
            for(int j = 0; j < N-i-1; j++) printf(" ");
            printf("*");
            for(int j = 0; j < 2 * i - 1; j++) printf(" ");
            printf("*");
        }
        else{
            for(int j = 0; j < 2 * N - 1; j++) printf("*");
        }
        printf("\n");
    }
    return 0;
}