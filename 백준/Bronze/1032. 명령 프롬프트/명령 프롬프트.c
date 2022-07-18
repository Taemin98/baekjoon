#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    char word[51][51] = {0,};
    char cmp[51] = {0,};
    int len = 0;
    
    for(int i = 0; i < N; i++) scanf("%s", &word[i]);
    for(int i = 0; word[0][i] != '\0'; i++) len++;

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < len; j++){
            if(word[i][j] != word[i+1][j]) cmp[j]++;
        }
    }
    for(int i = 0; i < len; i++){
        if(cmp[i] == 0) printf("%c", word[0][i]);
        else printf("?");
    }
    return 0;
}