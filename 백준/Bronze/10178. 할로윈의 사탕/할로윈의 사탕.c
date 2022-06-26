#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int c, v;
    for(int i = 0; i < T; i++){
        scanf("%d %d", &c, &v);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", c/v, c - (c/v)*v);
    }
    return 0;
}