//연길이의 이상형
#include<stdio.h>
#include<string.h>

int main(){
    char mbti[4] = {0,};
    scanf("%s", mbti);
    if(mbti[0] == 'I') printf("%c", 'E');
    else printf("%c", 'I');
    if(mbti[1] == 'N') printf("%c", 'S');
    else printf("%c", 'N');
    if(mbti[2] == 'T') printf("%c", 'F');
    else printf("%c", 'T');
    if(mbti[3] == 'P') printf("%c", 'J');
    else printf("%c", 'P');

    return 0;
}