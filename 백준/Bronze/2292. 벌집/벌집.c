#include <stdio.h>

int main(){
    int num;
    int a = 1;
    int i = 0;
    scanf("%d", &num);

    do{
    a += (6 * i++);
    } while(num - a > 0);
 
    printf("%d", i);

    return 0;
}