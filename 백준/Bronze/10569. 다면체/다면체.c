#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int V, E;

    for(int i =0; i < T; i++){
        scanf("%d %d", &V, &E);
        printf("%d\n", E - V + 2);
    }
    return 0;
}