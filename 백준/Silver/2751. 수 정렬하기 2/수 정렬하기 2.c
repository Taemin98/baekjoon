#include<stdio.h>

int sorted[1000000];

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
    int num[1000000] = {0,};
    for(int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }
    mergeSort(num, 0, N-1);
    for(int i = 0; i < N; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}