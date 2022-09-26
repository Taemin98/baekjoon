#include<stdio.h>

int MIN(int a, int b){
    return (a > b) ? b : a;
}
int main(){
    int N;
    scanf("%d", &N);
    int arr[1000001]= {0,};
    int temp = 0;
    arr[0] = arr[1] = 0;
    arr[2] = 1;
    
    for(int i = 3; i <= N; i++){
        arr[i] = arr[i-1] + 1;
        if(i % 3 == 0){
            temp = arr[i/3] + 1;
            arr[i] = MIN(arr[i], temp);
        }
        if(i % 2 == 0){
            temp = arr[i/2] + 1;
            arr[i] = MIN(arr[i], temp);
        }
    }
    printf("%d\n", arr[N]);
    return 0;
}