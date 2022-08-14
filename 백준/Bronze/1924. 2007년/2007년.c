#include<stdio.h>

int main(){
    int month, date;
    scanf("%d %d", &month, &date);
    int sum = 0;
    int monArr[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    char dayArr[8][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for(int i = 0; i < month - 1; i++) sum += monArr[i];
    sum += date;
    printf("%s\n", dayArr[sum % 7]);
    return 0;
}