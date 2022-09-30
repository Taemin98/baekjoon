//베스트셀러
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _book{
    char book[51];
    int count;
} Book;

Book sorted[1000];

void merge(Book arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end){
        if(strcmp(arr[i].book , arr[j].book) < 0) sorted[k++] = arr[i++];
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

void mergeSort(Book arr[], int start, int end){
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
    Book B[1000];
    int max = 0;
    char result[1000];
    int a = 0, b = 0;

    for(int i = 0; i < N; i++) {
        scanf("%s", B[i].book);
    }
    mergeSort(B, 0, N - 1);
    while(b < N){
        if(strcmp(B[a].book, B[b].book) == 0) {B[a].count++; b++;}
        else a = b;
    }
    for(int i = 0; i < N; i++){
        if(B[i].count > max){
            max = B[i].count;
            for(int j = 0; j <= strlen(B[i].book); j++) result[j] = B[i].book[j];
        }
    }
    printf("%s\n", result);
    return 0;
}