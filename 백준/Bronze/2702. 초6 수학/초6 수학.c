#include<stdio.h>

int getGCD(int A, int B){
    int num, num2;
    int result = 0;
    if(A > B){
        num = B; num2 = A;
    }
    else{
        num = A; num2 = B;
    }
    for(int i = num; i > 0; i--){
        if(num2 % i == 0 && num % i == 0) {
            result = i;
            break;
        }
    }
    return result;
}

int getLCM(int A, int B){
    int num, num2;
    int result = 0;
    if(A > B){
        num = B; num2 = A;
    }
    else{
        num = A; num2 = B;
    }
    for(int i = num2; i <= num * num2; i++){
        if(i % num == 0 && i % num2 == 0){
            result = i;
            break;
        }
    }
    return result;
}

int main(){
    int T;
    scanf("%d", &T);
    int a, b;

    for(int i = 0; i < T; i++){
        scanf("%d %d", &a, &b);
        printf("%d %d\n", getLCM(a, b), getGCD(a, b));
    }
    return 0;
}