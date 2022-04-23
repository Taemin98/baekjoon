#include<stdio.h>

int main(){
    char word[101];
    char word2[101];
    int len = 0;
    int eq = 1;
    int idx = 0;
    scanf("%s", word);

    for(int i = 0; word[i] != NULL; i++) len++;
    for(int i = len-1; i >= 0; i--) {
        word2[idx] = word[i];
        idx++;
    }
    for(int i = 0; i < len; i++){
        if(word[i] != word2[i]){
            eq = 0;
            break;
        }
    }
    printf("%d", eq);

    return 0;
}