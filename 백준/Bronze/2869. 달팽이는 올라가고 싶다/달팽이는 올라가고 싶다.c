#include<stdio.h>

int main(){
    int up, down, height, day;
    scanf("%d %d %d", &up, &down, &height);

   day = (height - up) / (up - down) + 1;

   if((height - up) % (up - down) != 0) day++;

    printf("%d", day);

    return 0;
}