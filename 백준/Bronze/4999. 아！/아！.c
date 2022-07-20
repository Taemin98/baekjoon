#include<stdio.h>
#include<string.h>

int main(){
    char patient[1001] = {0,};
    char doctor[1001]= {0,};
    scanf("%s %s", patient, doctor);
    int count = 0;
    int count2 = 0;

    if(strlen(patient) >= strlen(doctor)) printf("go");
    else printf("no");

    return 0;
}