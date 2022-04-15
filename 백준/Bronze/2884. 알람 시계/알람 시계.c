#include<stdio.h>

int main(){
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    minute -= 45;
    while(minute < 0){
        hour--;
        minute += 60;
        if(hour < 0) hour = 23;
    }
    printf("%d %d", hour, minute);

    return 0;
}