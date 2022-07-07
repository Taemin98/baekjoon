#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void arrycpy(char a[], char b[]){
    for(int i = 0; b[i] != '\0'; i++){
        a[i] = b[i];
    }
}

int main(){
    char A[101] = {0};
    char B[101] = {0};
    char C[201] = {0};
    char op;

    scanf(" %s", A);
    scanf(" %c", &op);
    scanf(" %s", B);

    if(strlen(A) >= strlen(B)) arrycpy(C, A);
    else arrycpy(C, B);

    if(op == '*'){
        printf("%d", 1);
        for(int i = 0; i < strlen(A) + strlen(B) - 2; i++) printf("%d", 0);
    }

    if(op == '+'){
        if( strlen(A) == strlen(B) ) C[0] = '2';
        else if( strlen(A) > strlen(B) ) C[(strlen(A)-strlen(B))] = '1';
        else C[(strlen(B)-strlen(A))] = '1';
        for(int i = 0; C[i] != '\0'; i++) printf("%d", C[i] - '0');
    }
    
    return 0;
}
