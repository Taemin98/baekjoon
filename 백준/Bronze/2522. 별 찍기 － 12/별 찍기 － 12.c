#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++) putchar(' ');
        for(int k = 0; k < i+1; k++) putchar('*');
        printf("\n");
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i+1; j++) putchar(' ');
        for(int k = 0; k < n-i-1; k++) putchar('*');
        printf("\n");
    }
    return 0;
}