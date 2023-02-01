//오늘의 날짜는?
#include<stdio.h>
#include<time.h>

int main(){
    time_t t = time(NULL);
    struct tm T1 = *localtime(&t);

    printf("%d\n", T1.tm_year + 1900);
    if(T1.tm_mon + 1 < 10) printf("%d%d\n", 0,T1.tm_mon + 1);
    else printf("%d\n", T1.tm_mon + 1);
    if(T1.tm_mday + 1 < 10) printf("%d%d\n", 0,T1.tm_mday);
    else printf("%d\n", T1.tm_mday);

    return 0;
}