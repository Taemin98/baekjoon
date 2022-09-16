//대칭 차집합
#include<stdio.h>
#include<stdlib.h>

int sorted[200000];

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

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) left = mid + 1;
        else if(target < arr[mid]) right = mid - 1;
    }
    return -1;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int A[200001] = {0,};
    int B[200001] = {0,};
    int count = 0;
    int result = N + M;
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    for(int i = 0; i < M; i++) scanf("%d", &B[i]);

    mergeSort(A, 0, N-1);
    mergeSort(B, 0, M-1);

    for(int i = 0; i < M; i++) {
        if(binarySearch(A, N, B[i]) >= 0) count++;
    }
    for(int i = 0; i < N; i++){
        if(binarySearch(B, M, A[i]) >= 0) count++;
    }
    result -= count;
    printf("%d", result);

    return 0;
}
