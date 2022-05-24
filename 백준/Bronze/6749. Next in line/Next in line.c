#include<stdio.h>

int main(){
    int y, m, o;
    scanf("%d %d", &y, &m);
    o = (m - y) + m;
    printf("%d", o);
    return 0;
}