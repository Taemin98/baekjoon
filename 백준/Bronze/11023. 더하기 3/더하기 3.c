#include<stdio.h>

int main(){
    int sum = 0;
    int num = 0;
    while(~scanf("%d", &num)){
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
