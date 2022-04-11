#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char code[501];
    int len;

    while(1){
        len = 0;
        gets(code);
        for(int i = 0; code[i] != NULL; i++) len++;
        if(len == 3){
            if(code[0] == 'E' && code[1] == 'N' && code[2] == 'D') break;
        }
        for(int i = len - 1; i >= 0; i--){
            putchar(code[i]);
        }
        printf("\n");
    }

    return 0;
}