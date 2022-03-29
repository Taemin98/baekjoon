#include<stdio.h>

int main(){
    int hour;
    int minute;
    int cook;
    scanf("%d %d %d", &hour, &minute, &cook);

   minute += cook;
    while(minute >= 60){
        hour++;
        minute -= 60;
        if(hour == 24) hour = 0;
    }

    printf("%d %d", hour, minute);
    return 0;
}