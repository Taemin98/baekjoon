#include<stdio.h>
#include<string.h>

int main(){
    char S[101] = {0,};
    scanf("%s", S);
    int alphabet[27] = {0,};
    for(int i = 0; i < strlen(S); i++) alphabet[S[i] - 97]++;
    for(int i = 0; i < 26; i++) printf("%d ", alphabet[i]);
    return 0;
}