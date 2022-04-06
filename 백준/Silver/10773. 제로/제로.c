#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[100000] = {0,};
    int arr2[100000];
    int sum = 0;
    int count = 0;

    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < N; i++){
        if(arr[i] != 0){
            arr2[i-count] = arr[i];
        }
        else{
            arr2[i-count] = 0;
            count+=2;
        }
    }

    for(int i = 0; i < N - count; i++) sum += arr2[i];
    printf("%d", sum);

    return 0;
}