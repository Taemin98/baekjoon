#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    long A, B;

    for(int i = 0; i < T; i++){
        scanf("%ld %ld", &A, &B);
        printf("%ld\n", A + B);
    }
    return 0;
}