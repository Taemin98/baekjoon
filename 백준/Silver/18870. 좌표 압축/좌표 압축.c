#include<stdio.h>
#include<stdlib.h>

int sorted[1000000];
int count = 0;

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
        for(int a  = i; a <= mid; a++) sorted[k++] = arr[a];
    }
    for(int z= start; z <= end; z++) arr[z] = sorted[z];
}

void mergeSort(int arr[], int start, int end){
    int mid = (start + end) / 2;
    if(start < end){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

void unique(int arr[], int size){
    int copy[size];
    int idx = 1;
    copy[0] = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] != arr[i-1]) copy[idx++] = arr[i];
    }
    for(int i = 0; i < size; i++) arr[i] = '\0';
    for(int i = 0; i < idx; i++) arr[i] = copy[i];
    count = idx;
}

int BSearch(int arr[], int left, int right, int target){
    while(left <= right){
        int mid = (left + right) / 2;
        if(target == arr[mid]) return mid;
        else if(target < arr[mid]) right = mid - 1;
        else if(target > arr[mid]) left = mid + 1;
    }
}

int main(){
    int N;
    int arr[1000000] = {0,};
    int arr2[1000000] = {0,};
    int idx = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }
    mergeSort(arr2, 0, N - 1);
    unique(arr2, N);
    for(int i = 0; i < N; i++) printf("%d ", BSearch(arr2, 0, count - 1, arr[i]));
    return 0;
}