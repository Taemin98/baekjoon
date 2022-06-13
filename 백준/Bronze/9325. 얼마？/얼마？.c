#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int s, n;
    int q, p;
    int price = 0;

    for(int i = 0; i < T; i++){
        price = 0;
        scanf("%d", &s);
        price = s;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d %d", &q, &p);
            price += q * p;
        }
        printf("%d\n", price);
    }
    return 0;
}