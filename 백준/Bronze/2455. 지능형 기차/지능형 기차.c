#include<stdio.h>

int main(){
    int on, off;
    int max = 0;
    int sum = 0;

    for(int i = 0; i < 4; i++){
        scanf("%d %d", &off, &on);
        if(sum >= off) sum -= off;      
        sum += on;
        if(sum >= max) max = sum;
    }
    printf("%d", max);
    return 0;
}