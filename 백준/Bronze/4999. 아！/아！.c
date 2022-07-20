#include<stdio.h>
#include<string.h>

int main(){
    char patient[1001] = {0,};
    char doctor[1001]= {0,};
    scanf("%s %s", patient, doctor);
    int count = 0;
    int count2 = 0;

    for(int i = 0; i < 1001; i++){
        if(patient[i] == 'h') count = i;
        if(doctor[i] == 'h') count2 = i;
    }
    if(count >= count2) printf("go");
    else printf("no");

    return 0;
}
