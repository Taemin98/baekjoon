// 별찍기

#include<stdio.h>

#define size 2188

char arr[size][size] = { NULL };
int count = 0;

void star(int n, char arr[][size]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( i > n / 3 - 1  && i <= (n / 3 ) * 2 - 1 &&  j > n / 3 - 1 && j <= (n / 3) * 2 - 1 ){
                if(count != 0){
                    for(int k = 0; k < size - i; k+=n) {
                        for(int l = 0; l < size - j; l+=n) arr[i+k][j+l] = ' ';
                    }
                }
                else arr[i][j] = ' ';
            }
            else {
                if(arr[i][j] != 2) arr[i][j] = '*';
            }
        }
    }
    while(n / 3 >= 1){
        n /= 3;
        count++;
        star(n, arr);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    star(N, arr);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
