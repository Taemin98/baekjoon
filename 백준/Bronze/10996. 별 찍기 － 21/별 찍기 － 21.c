#include<stdio.h>

int isOdd(int num){
    if(num % 2 != 0) return 1;
    else return -1;
}

int main(){
    int N;
    scanf("%d", &N);
    if(N == 1) printf("*");
    else{
        for(int i = 1; i <= 2*N; i++){
            for(int j = 1; j <= N; j++){
                if(isOdd(i) == 1){
                    if(isOdd(j) == 1) printf("*");
                    else printf(" ");
                }
                else{
                    if(isOdd(j) != 1) printf("*");
                    else printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}