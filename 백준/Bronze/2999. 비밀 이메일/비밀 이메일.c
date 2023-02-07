//비밀 이메일
#include<stdio.h>
#include<string.h>

int main(){
    char word[101] = {0,};
    scanf("%s", word);
    int R = 1, C, N;
    N = strlen(word);
    int idx = 0;

    for(int i = R; i <= N; i++){
        if(N % i == 0) {
            if(i <= N/i) {
                C = N / i; 
                R = i;
            }
        }
    }

    char matrix[R][C];

    for(int i = 0; i < C; i++){
        for(int j = 0; j < R; j++){
            matrix[j][i] = word[idx++];
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            printf("%c", matrix[i][j]);
        }
    }

    return 0;
}