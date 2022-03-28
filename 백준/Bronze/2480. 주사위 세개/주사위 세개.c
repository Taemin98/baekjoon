#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c) printf("%d", a * 1000 + 10000);
    else if(a == b || a == c) printf("%d", a * 100 + 1000);
    else if(b == c) printf("%d", b * 100 + 1000);
    else {
        if(a > b && a > c) printf("%d", a * 100);
        else if(b > a && b > c) printf("%d", b * 100);
        else printf("%d", c * 100);
    }
    return 0;
}