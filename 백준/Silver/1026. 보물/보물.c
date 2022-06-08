#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int A[50]= {0,};
    int B[50]= {0,};
    int temp;
    int result = 0;

    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    for(int i = 0; i < N; i++) scanf("%d", &B[i]);

    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(A[i] < A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(B[i] > B[j]){
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    for(int i = 0; i < N; i++){
        result += A[i] * B[i];
    }
    printf("%d\n", result);

    return 0;
}