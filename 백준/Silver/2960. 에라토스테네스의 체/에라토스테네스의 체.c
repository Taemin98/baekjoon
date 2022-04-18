#include<stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[1001] = {0,};
    int count = 0;
    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i <= N; i++){
        if(arr[i] == 0){
            for(int j = i; j <= N; j++){
                if(j % i == 0 && arr[j] == 0) {
                    arr[j] = 1;
                    count++;
                }
                if(count == K){
                    printf("%d", j);
                    break;
                }
            }
        }
    }
    return 0;
}