#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        for(int l = 0; l < N - i; l++) printf(" ");
        for(int j = 1; j <= 2*i-1; j++){
            if(j % 2 != 0) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}