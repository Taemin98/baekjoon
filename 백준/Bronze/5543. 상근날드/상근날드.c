#include<stdio.h>

int main(){
    int burger[3] = {0,};
    int soda[2] = {0,};
    int min = 2000, min2 = 2000;
    
    for(int i = 0; i < 3; i ++){
        scanf("%d", &burger[i]);
        if(burger[i] <= min) min = burger[i];
    }
    for(int i = 0; i < 2; i++){
        scanf("%d", &soda[i]);
        if(soda[i] <= min2) min2 = soda[i];
    }
    printf("%d\n", min + min2 - 50);
    return 0;
}