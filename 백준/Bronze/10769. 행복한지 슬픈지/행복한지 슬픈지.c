//행복한지 슬픈지
#include<stdio.h>
#include<string.h>

int main(){
    char sen[256] = {0,};
    scanf("%[^\n]s", sen);
    int happy = 0;
    int sad = 0;

    for(int i = 0; i < strlen(sen)-2; i++){
        if(sen[i] == ':' && sen[i+1] == '-' && sen[i+2] == ')') happy++;
        if(sen[i] == ':' && sen[i+1] == '-' && sen[i+2] == '(') sad++;
    }
    if(happy != 0 && happy == sad) printf("unsure\n");
    else if(happy > sad) printf("happy\n");
    else if(happy < sad) printf("sad\n");
    else if(happy == 0 && sad == 0)printf("none\n");

    return 0;
}