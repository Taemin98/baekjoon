#include<stdio.h>

int bar[6] = {0,};

int bar_sum(){
    int result= 0;
    for(int i = 0; i < 6; i++){
        result += bar[i];
    }
    return result;
}

int main(){
    int X;
    int n = 64;
    scanf("%d", &X);
    int i = 0;
    bar[0] = 64;
    int count = 0;

    while(bar_sum() != X){
        if(X == 64) break;
        else if(bar_sum() > X){
            n /= 2;
            bar[i] = n;
        }
        else if(bar_sum() < X){
            n /= 2;
            bar[++i] = n;
        }
    }

    for(int i  = 0; bar[i] != 0; i++) count++;
    printf("%d", count);

    return 0;
}