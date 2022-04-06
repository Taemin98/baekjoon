#include<stdio.h>

int main(){
    int n;
    int i, j;
    scanf("%d", &n);

    if(n % 5 == 0){
        printf("%d", n / 5);
        return 0;
    }

    for(i = 1; i < n / 3; i++){
        if((n - 3 * i) % 5 == 0){
            j = (n - 3 * i) / 5;
            printf("%d", i + j);
            return 0;
        }
    }

    if (n % 3 == 0) printf("%d", n / 3);

    else printf("%d", -1);

    return 0;
}