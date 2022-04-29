#include<stdio.h>

int main(){
    char bowl[51];
    scanf("%s", bowl);
    int sum = 10;

    for(int i = 1; bowl[i] != NULL; i++){
        if(bowl[i-1] == bowl[i]) sum += 5;
        else sum += 10 ;
    }
    printf("%d", sum);
    return 0;
}