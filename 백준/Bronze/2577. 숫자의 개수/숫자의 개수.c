#include<stdio.h>

int main(){
    int a, b, c;
    int num;
    int x[10] = {0};
    scanf("%d %d %d", &a, &b, &c);
    num = a * b * c;

    while(num > 0){
        x[num % 10] += 1;
        num /= 10;
    }

    for(int j = 0; j < 10; j++) printf("%d\n", x[j]);

    return 0;
}