#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            putchar('*');
        }
        for(int j = 0; j < 2*n-2*(i+1); j++){
            putchar(' ');
        }
        for(int j = 0; j <= i; j++){
            putchar('*');
        }
        printf("\n");
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            putchar('*');
        }
        for(int j = 0; j < 2*i; j++){
            putchar(' ');
        }
        for(int j = 0; j < n-i; j++){
            putchar('*');
        }
        printf("\n");
    }

    return 0;
}