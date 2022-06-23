#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int price[1000] = {0,};
    int max = 0;
    int a, b, c;
    int z = 0;
    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a == b && b == c){
            price[z++] = a * 1000 + 10000;
        }
        else if(a == b || a == c){
            price[z++] = a * 100 + 1000;
        }
        else if(b == c){
            price[z++] = b * 100 + 1000;
        } 
        else{
            if(a >= b && a >= c) price[z++] = a * 100;
            else if(b >= a && b >= c) price[z++] = b * 100;
            else price[z++] = c * 100;
        }      
    }
    for(int i = 0; i < N; i++){
        if(price[i] >= max) max = price[i];
    }
    printf("%d\n", max);
    return 0;
}