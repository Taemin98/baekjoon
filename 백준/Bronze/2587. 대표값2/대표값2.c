// 대표값2

#include<stdio.h>

int main(){
    int arr[5] = {0,};
    int cen, avg;
    int sum = 0;
    int temp;
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    avg = sum / 5;
    cen = arr[2];
    printf("%d\n%d\n", avg, cen);
    return 0;
}