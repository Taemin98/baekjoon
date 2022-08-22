#include<stdio.h>
#include<string.h>

int main(){
    char S[256] = {0,};
    int count = 0;

    while(1){
        gets(S);
        if(strcmp(S, "#") == 0) break;
        for(int i = 0; i < strlen(S); i++){
            if(S[i] == 'a' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'e' || S[i] == 'A' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' || S[i] == 'E'){
                count++;                
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}