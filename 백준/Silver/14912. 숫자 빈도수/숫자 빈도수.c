//숫자 빈도수
#include<stdio.h>

int cc(int num, int target){
    int result = 0;
    int i = 10;
    while(num >= 1){
        if(num % i == target) result++;
        num /= 10;
    }
    return result;
}

int main(){
    int n, d;
    scanf("%d %d", &n, &d);
    int count = 0;

    for(int i = 1; i <= n; i++){
        count += cc(i, d);
    }
    printf("%d", count);
    return 0;
}