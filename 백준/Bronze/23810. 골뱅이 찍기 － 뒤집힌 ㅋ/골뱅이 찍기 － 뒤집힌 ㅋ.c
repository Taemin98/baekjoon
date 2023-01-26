//골뱅이 찍기 - 뒤집힌 ㅋ
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N*5; i++){
        if(i <= N-1 || i >= 2*N && i < 3*N){
            for(int j = 0; j < N*5; j++) printf("@");
        }
        else{
            for(int j = 0; j < N; j++) printf("@");
        }
        printf("\n");
    }
    return 0;
}