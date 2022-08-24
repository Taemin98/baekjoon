#include<stdio.h>

typedef struct{
    char name[16];
    int day, month, year;
} Student;

int main(){
    int N;
    scanf("%d", &N);
    Student S[100];
    Student max;
    Student min;
    max.year = 2010;
    max.month = 12;
    max.day = 31;
    min.year = 1990;
    min.month = 1;
    min.day = 1;
    
    for(int i = 0; i < N; i++){
        scanf("%s %d %d %d", S[i].name, &S[i].day, &S[i].month, &S[i].year);

        if(S[i].year < max.year) max = S[i];
        else if(S[i].year == max.year){
            if(S[i].month < max.month) max = S[i];
            else if(S[i].month == max.month){
                if(S[i].day <= max.day) max = S[i];
            }
        }
        if(S[i].year > min.year) min = S[i];
        else if(S[i].year == min.year){
            if(S[i].month > min.month) min = S[i];
            else if(S[i].month == min.month){
                if(S[i].day >= min.day) min = S[i];
            }
        }
    }
    printf("%s\n%s", min.name, max.name);
    return 0;
}