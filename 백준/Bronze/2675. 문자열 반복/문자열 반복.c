#include<stdio.h>
#include<string.h>

int main(){
    int c;
    int R;
    char S[20];
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d", &R);
        char P[20*R+1];
        scanf("%s", S);
        int s_len = strlen(S);

        int l = 0;
        for(int j = 0; j < s_len; j++){
            int k = R;
            while(k > 0){
                P[l] = S[j];
                printf("%c", P[l]);
                k--;
                l++;
            }
        }
        printf("\n");
    }

    return 0;
}