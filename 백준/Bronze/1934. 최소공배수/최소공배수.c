#include<stdio.h>

int main(){
    int A, B;
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        if(A > B){
            for(int i = 1; i <= 45000; i++){
                if(i*A % B == 0){
                    printf("%d\n", i*A);
                    break;
                }
            }
        }
        else{
            for(int i = 1; i <= 45000; i++){
                if(i*B % A == 0){
                    printf("%d\n", i*B);
                    break;
                }
            }            
        }
    }
    return 0;
}