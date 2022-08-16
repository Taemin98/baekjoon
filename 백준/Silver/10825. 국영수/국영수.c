//국영수
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _student{
    char name[11];
    int kor, eng, math;
} Student;

Student sorted[100000];

void merge(Student arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end){
        if(arr[i].kor > arr[j].kor) sorted[k++] = arr[i++];
        else if(arr[i].kor < arr[j].kor) sorted[k++] = arr[j++];
        else{
            if(arr[i].eng < arr[j].eng) sorted[k++] = arr[i++];
            else if(arr[i].eng > arr[j].eng) sorted[k++] = arr[j++];
            else{
                if(arr[i].math > arr[j].math) sorted[k++] = arr[i++];
                else if(arr[i].math < arr[j].math) sorted[k++] = arr[j++];
                else{
                    if(strcmp(arr[i].name, arr[j].name) > 0) sorted[k++] = arr[j++];
                    else sorted[k++] = arr[i++];
                }
            }
        }
    }
    if(i > mid){
        for(int a = j; a <= end; a++) sorted[k++] = arr[a];
    }
    else{
        for(int a = i; a <= mid; a++) sorted[k++] = arr[a];
    }
    for(int z = start; z <= end; z++) arr[z] = sorted[z];
}

void mergeSort(Student arr[], int start, int end){
    int mid = (start + end) / 2;
    if(start < end){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid ,end);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    Student *S;
    S = (Student *) malloc(N * sizeof(Student));

    for(int i = 0; i < N; i++) scanf("%s %d %d %d", S[i].name, &S[i].kor, &S[i].eng, &S[i].math);
    mergeSort(S, 0, N - 1);
    for(int i = 0; i < N; i++) printf("%s\n", S[i].name);
    free(S);
    return 0;
}