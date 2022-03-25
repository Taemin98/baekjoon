#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int min = 1000000;
    int count = 0;

    for(int i = 1; i < N; i++){
        int num = i;
        int sum = 0;
        for(int j = 0; num >= 1; j++){
            sum += num % 10;
            num /= 10;
        }
        if(i + sum == N && i < min) {
            min = i;
            count++;
        }
    }

    if(count != 0) printf("%d", min);
    else printf("%d", 0);

    return 0;
}
