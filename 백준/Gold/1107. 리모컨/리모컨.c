//리모컨
#include<stdio.h>

int check(int but[], int N, int M){
    if(N==0){
       for(int j = 0; j < M; j++){
            if(but[j] == N % 10) return -1;
        } 
    }
    while(N >= 1){
        for(int j = 0; j < M; j++){
            if(but[j] == N % 10) return -1;
        }
        N /= 10;
    }
    return 1;
}

int D(int N){
    if(N == 0) return 1;
    int count = 0;
    while(N >= 1){
        if(N % 10 >= 0) count++;
        N /= 10;
    }
    return count;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int but[10] = {0,};
    int min = 500000;
    int count = 0;
    int temp;
    int mintemp = 500000;

    for(int i = 0; i < M; i++){
        scanf("%d", &but[i]);
    }

    if((N-100) <= min && (N-100) >= 0) min = (N-100);
    if((100-N) <= min && (100-N) >= 0) min = (100-N);
    
    for(int i = N; i >= 0; i--){
        if(check(but, i, M) == 1){
            temp = D(i) + (N - i);
            if(temp <= mintemp && temp >= 0) mintemp = temp; 
        }
    }
    if(mintemp < min && mintemp >= 0) min = mintemp;

    for(int i = N; i <= 1000001; i++){
        if(check(but, i, M) == 1){
            temp = D(i) + (i - N);
            if(temp <= mintemp && temp >= 0) mintemp = temp;
        }
    }
    if(mintemp < min && mintemp >= 0) min = mintemp;
    // printf("min : %d\ntemp : %d\ni : %d", min, temp, temp2);
    printf("%d\n", min);

    return 0;
}