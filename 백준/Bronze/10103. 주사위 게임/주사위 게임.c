#include<stdio.h>

int main(){
    int A, B;
    int As = 100;
    int Bs = 100;
    int c = 0;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d %d", &A, &B);
        if(A > B) Bs -= A;
        else if (A < B) As -= B;
    }
    printf("%d %d", As, Bs);

    return 0;
}