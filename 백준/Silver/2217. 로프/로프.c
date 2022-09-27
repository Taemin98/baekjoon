//로프
#include<stdio.h>

int sorted[100000];

void merge(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }
    if(i > mid){
        for(int a = j; a <= end; a++) sorted[k++] = arr[a];
    }
    else{
        for(int a = i; a <= mid; a++) sorted[k++] = arr[a];
    }
    for(int z = start; z <= end; z++) arr[z] = sorted[z];
}

void mergeSort(int arr[], int start, int end){
    int mid = (start + end) / 2;
    if(start < end){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[100000] = {0,};
    int max = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, N-1);

    for(int i = 0; i < N; i++){
        if(arr[i] * (N - i) >= max) max = arr[i] * (N - i);
    }
    printf("%d\n", max);
    return 0;
}