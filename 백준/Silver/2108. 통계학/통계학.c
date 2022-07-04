// 통계학
#include<stdio.h>
#include<math.h>

int sorted[500000] = {0,};

void merge(int arr[], int left, int mid, int right){
    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }
    if(i > mid){
        for(int a = j; a <= right; a++) sorted[k++] = arr[a];
    }
    else{
        for(int a = i; a <= mid; a++) sorted[k++] = arr[a];
    }
    for(int z = left; z <= right; z++) arr[z] = sorted[z];
}

void mergeSort(int arr[], int left, int right){
    int mid = (left + right) / 2;
    if(left < right){
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int num[500000] = {0,};
    int sum = 0;
    int max = -4000, min = 4000;
    double avg = 0;
    int mode[8001] = {0,};      // 최빈값 배열
    int modeMax = 0;
    int count[8001] = {0,};     // 최빈값을 가지는 수의 배열
    int idx = 0;
    int countSec = 4000;
    int abcd = 4000;
    int count2 = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        mode[num[i]+4000]++;
        sum += num[i];
        if(num[i] > max) max = num[i];
        if(num[i] < min) min = num[i];
    }
    for(int i = 0; i < 8001; i++){
        if(mode[i] > modeMax) {
            modeMax = mode[i];
            for(int i = 0; i <= idx; i++) count[i] = 0;
            idx = 0;
            abcd = 4000;
            count[idx] = i - 4000;
            if(count[idx] < abcd) abcd = count[idx];
            count2++;
        }
        else if(mode[i] == modeMax && count2 != 0){
            count[++idx] = i - 4000;
            if(count[idx] < abcd) abcd = count[idx];
        }
    }
    if(idx != 0){
        for(int i = 0; i <= idx; i++){
            if(count[i] > abcd && count[i] < countSec) countSec = count[i];
        }
    }
    else countSec = abcd;

    mergeSort(num, 0, N-1);
    avg = (double)sum / (double)N;
    if(avg < 0 && avg > -1) printf("%d\n", (int)avg);
    else printf("%.f\n", avg);
    printf("%d\n", num[(N/2)]);
    printf("%d\n", countSec);
    printf("%d\n", max - min);
    return 0;
}