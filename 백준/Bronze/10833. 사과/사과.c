#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int st = 0, apple = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d %d", &st, &apple);
        sum += apple % st;
    }
    printf("%d", sum);
    return 0;
}