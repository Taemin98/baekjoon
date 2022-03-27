#include<stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    char chess[50][50];
    int counter = 0;
    int counter2 = 0;
    int min = 64;

    for(int i = 0; i < M; i++){
        scanf("%s", chess[i]);
    }

    for(int m = 0; m < M-7; m++){
        for(int n = 0; n < N-7; n++){
            counter = 0;
            counter2 = 0;
            for(int i = m; i < m+8; i++){
                for(int j = n; j < n+8; j++){
                    if( (i+j) % 2 == 0){
                        if(chess[i][j] == 'B') counter++;
                        else counter2++;
                    }
                    else {
                        if(chess[i][j] == 'B') counter2++;
                        else counter++;
                    }
                }
            }
            if(counter < min) min = counter;
            if(counter2 < min) min = counter2;
        }
    }

    printf("%d", min);

    return 0;
}
