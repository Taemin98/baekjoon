//알고리즘 수업 - 병합 정렬 1
#include<stdio.h>

int sorted[500000];
int order[100000000];
int idx = 0;

void merge(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]) {sorted[k++] = arr[i]; order[idx++] = arr[i++];}
        else {sorted[k++] = arr[j]; order[idx++] = arr[j++];}
    }
    if(i > mid){
        for(int a = j; a <= end; a++) {sorted[k++] = arr[a]; order[idx++] = arr[a];}
    }
    else{
        for(int a = i; a <= mid; a++) {sorted[k++] = arr[a]; order[idx++] = arr[a];}
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
    int N, K;
    scanf("%d %d", &N, &K);
    int A[500000];
    for(int i = 0 ; i < N; i++) scanf("%d", &A[i]);
    mergeSort(A, 0, N-1);
    if(idx < K) printf("%d", -1);
    else printf("%d", order[K-1]);

    return 0;
}