#include<stdio.h>

int main(){
    int A, B;
    int count = 1;
    scanf("%d %d", &A, &B);
    
    while(A != B){
        if(A > B) {count = -1; break;}
        else if(B % 2 == 0) {B /= 2; count++;}
        else if(B % 10 == 1) {B /= 10; count++;}
        else {count = -1; break;}
    }
    printf("%d", count);
    
    return 0;
}