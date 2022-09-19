//랜선 자르기
#include<stdio.h>

int main(){
    int K, N;
    scanf("%d %d", &K, &N);
    long long int arr[10001] = {0,};
    long long int max = 0;
    long long int max2 = 0;
    long long int count = 0;
    long long int left, right, mid;
    
    for(int i = 0; i < K; i++){
        scanf("%lld", &arr[i]);
        if(arr[i] > max) max = arr[i];
    }

    left = 1; right = max; 

    while(left <= right){
        mid = (left + right) / 2;
        for(int i = 0; i < K; i++) count += arr[i] / mid;
        if(count < N) right = mid - 1;
        else{
            if(mid > max2) max2 = mid; 
            left = mid + 1;
        }
        count = 0;
    }
    printf("%lld\n", max2);
    return 0;
}