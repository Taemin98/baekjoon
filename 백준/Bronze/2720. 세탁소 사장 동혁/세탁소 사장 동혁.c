//세탁소 사장 동혁
#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int money;
    int a, b, c, d;

    for(int i = 0; i < T; i++){
        scanf("%d", &money);
        a = money / 25;
        money -= a * 25;
        b = money / 10;
        money -= b * 10;
        c = money / 5;
        money -= c * 5;
        d = money / 1;
        printf("%d %d %d %d\n", a, b, c, d);
    }
    return 0;
}