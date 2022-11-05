//행렬덧셈
#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int mat[N][M];
    int mat2[N][M];
    int mat3[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            mat3[i][j] = mat[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}