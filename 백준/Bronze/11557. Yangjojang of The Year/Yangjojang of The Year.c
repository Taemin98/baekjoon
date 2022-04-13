#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int N;
    char S[21];
    char copy[21];
    int L;
    int max;

    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        max = 0;
        for(int j = 0; j < N; j++){
            scanf("%s %d", S, &L);
            if(L >= max){
                max = L;
                for(int i = 0; copy[i] != NULL; i++) copy[i] = '\0';
                for(int i = 0; S[i] != NULL; i++) copy[i] = S[i];
                for(int i = 0; S[i] != NULL; i++) S[i] = '\0';
            }
        }
        for(int i = 0; copy[i] != NULL; i++) printf("%c", copy[i]);
        printf("\n");
    }
    return 0;
}