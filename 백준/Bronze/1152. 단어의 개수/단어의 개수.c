#include<stdio.h>

int main(){
    char s[1000001];
    gets(s);
    int count = 0;

   for(int i = 1; s[i] != '\0'; i++) {
        if(s[i-1] == ' ' && s[i] != ' ') count++;
    }
    if(s[0] != ' ') count++;
    printf("%d", count);

    return 0;
}