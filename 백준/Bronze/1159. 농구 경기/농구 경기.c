//농구 경기
#include<stdio.h>

char sorted[27];

void merge(char arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }
    if(i > mid){
        for(int a = j; a <= end; a++) sorted[k++] = arr[a];
    }
    else{
        for(int a = i; a <= mid; a++) sorted[k++] = arr[a];
    }
    for(int z = 0; z <= end; z++) arr[z] = sorted[z];
}

void mergeSort(char arr[], int start, int end){
    int mid = (start + end) / 2;
    if(start < end){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    char name[31] = {0,};
    int alpha[26] = {0,};
    char player[27] = {0,};
    int idx = 0;
    int yes = 0;

    for(int i = 0; i < N; i++){
        scanf("%s", name);
        alpha[name[0] - 97]++;
        if(alpha[name[0] - 97] == 5) {player[idx++] = name[0]; yes = 1;}
    }
    if(yes == 1){
        mergeSort(player, 0, idx - 1);
        for(int i = 0; i < idx; i++) printf("%c", player[i]);
    }
    else printf("PREDAJA");

    return 0;
}