#include<stdio.h>
#include<math.h>

int main(){
    int A, I;
    double result;
    scanf("%d %d", &A, &I);
    for(int i = 1; i <= A * I; i++){
        result = (double)i / (double)A;
        if(ceil(result) == I){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}