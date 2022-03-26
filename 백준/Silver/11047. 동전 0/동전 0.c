#include <stdio.h>

int main(void) {
    int N, K, i, cnt = 0;
    int arr[10];
    scanf("%d %d ", &N, &K);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    i = N - 1;
    while (K > 0) {
        if (arr[i] > K) {
            i--;
        }
        else {
            K = K - arr[i];
            cnt++;
        }
    }
    printf("%d", cnt);
}