#include<stdio.h>

int main(){
    int arr[5] = {0,};
    int result = 0;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for(int i = 0; i < 5; i++){
        result += arr[i]*arr[i] % 10;
    }
    printf("%d", result%10);
    return 0;
}