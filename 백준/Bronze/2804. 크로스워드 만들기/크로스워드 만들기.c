//크로스워드 만들기
#include<stdio.h>
#include<string.h>

int main(){
    char A[31] = {0,};
    char B[31] = {0,};
    scanf("%s %s", A, B);
    int idx, idx2;
    int Alen = strlen(A);
    int Blen = strlen(B);

    for(int i = 0; i < Alen; i++){
        for(int j = 0; j < Blen; j++){
            if(A[i] == B[j]){
                idx = i;
                idx2 = j;
                i = Alen;
                break;
            }
        }
    }
    for(int i = 0; i < Blen; i++){
        for(int j = 0; j < Alen; j++){
            if(i == idx2) {
                printf("%s", A);
                break;
            }
            else{
                if(j == idx) printf("%c", B[i]);
                else printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}