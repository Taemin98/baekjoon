#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct _word{
    char word[51];
    int len;
} Word;

void merge(Word list[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    Word *temp;
    temp = (Word *) calloc(end + 1, sizeof(Word));

    while(i <= mid && j <= end){
        if(list[i].len < list[j].len) temp[k++] = list[i++];
        else if(list[i].len > list[j].len) temp[k++] = list[j++];
        else{
            if(strcmp(list[i].word, list[j].word) < 0){
                temp[k++] = list[i++];
            }
            else{
                temp[k++] = list[j++];
            }
        }
    }
    if(i > mid){
        for(int a = j; a <= end; a++) temp[k++] = list[a];
    }
    else{
        for(int a = i; a <= mid; a++) temp[k++] = list[a];
    }
    for(int a = start; a <= end; a++) list[a] = temp[a];
    free(temp);
}

void mergeSort(Word list[], int start, int end){
    int mid = (start + end) / 2;
    if(start < end){
        mergeSort(list, start, mid);
        mergeSort(list, mid + 1, end);
        merge(list, start, mid, end);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    Word *list;
    list = (Word *) calloc(N + 1, sizeof(Word));

    for(int i = 0; i < N; i++){
       scanf("%s", list[i].word);
       list[i].len = strlen(list[i].word);
    }
    mergeSort(list, 0, N -1);
    for(int i = 0; i < N; i++){
        if(i > 0 && strcmp(list[i].word, list[i-1].word) == 0);
        else printf("%s\n", list[i].word);
    }
    free(list);
    return 0;
}