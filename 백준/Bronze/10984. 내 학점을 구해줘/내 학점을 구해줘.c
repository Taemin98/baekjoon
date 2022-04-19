#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int N;
    int C[11];
    double G[11];
    int sum = 0;
    double sum2;
    double avg;

    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        sum = 0;
        sum2 = 0;
        avg = 0;
        for(int j = 0; j < N; j++){
            scanf("%d %lf", &C[j], &G[j]);
            sum += C[j];
            sum2 += (C[j] * G[j]);
        }
        avg = sum2 / (double) sum;
        printf("%d %.1f\n", sum, avg);
    }
    return 0;
}