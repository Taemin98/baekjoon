#include<stdio.h>

int main(){
    int price;
    int sum = 0;
    int book;
    scanf("%d", &price);
    for(int i = 0; i < 9; i++){
        scanf("%d", &book);
        sum += book;
    }
    printf("%d\n", price - sum);
    return 0;
}