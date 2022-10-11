//영화감상
#include<stdio.h>

int sorted[50];

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
    int N, L, H;
    scanf("%d %d %d", &N, &L, &H);
    int score[50] = {0,};
    int sum = 0;
    int count = 0;

    for(int i = 0; i < N; i++) scanf("%d", &score[i]);
    mergeSort(score, 0, N-1);
    for(int i = L; i < N-H; i++){
        sum += score[i];
        count++;
    }
    printf("%.10f\n", (double)sum / (double)count);

    return 0;
}