#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    char s[1001] = {0,};
    for(int i = 0; i < T; i++){
        int count = 0;
        scanf("%s", s);
        for(int j = 0; s[j] != '\0'; j++) count++;
        printf("%c%c\n", s[0], s[count-1]);
    }
    return 0;
}