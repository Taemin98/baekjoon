#include<stdio.h>

int han_num(int num){
    int a[3];
    if(num >= 100){
        for(int i = 2; i >= 0; i--){
            a[i] = num % 10;
            num /= 10;
        }
        if(a[0] - a[1] == a[1] - a[2] && a[0] > 0) return 1;
        else return 0;
    }
    return 1;
}

int main(){
    int input;
    int count = 0;
    scanf("%d", &input);

    for(int i = 1; i <= input; i++){
        if(han_num(i) == 1) count++;
    }
    printf("%d", count);
    return 0;
}