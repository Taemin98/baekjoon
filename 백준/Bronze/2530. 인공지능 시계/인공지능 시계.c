#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int time;
    scanf("%d", &time);

    A += time / 3600;
    B += (time % 3600) / 60;
    C += (time % 3600) % 60;
    if(C >= 60){
        B++;
        C -= 60;
    }
    if(B >= 60){
        A++;
        B -= 60;
    }
    if(A >= 24) A = A % 24;

    printf("%d %d %d", A, B, C);
    return 0;
}