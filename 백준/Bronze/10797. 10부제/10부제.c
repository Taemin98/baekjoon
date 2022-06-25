#include<stdio.h>

int main(){
    int day;
    scanf("%d", &day);
    int car[5] = {0,};
    int count = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &car[i]);
        if(car[i] == day)  count++;
    }
    printf("%d", count);
    return 0;
}