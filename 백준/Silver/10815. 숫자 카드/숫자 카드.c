// 숫자 카드
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if(num1 < num2) return -1;
    if(num1 > num2) return 1;
    return 0;
}

int BSearch(int arr[], int target, int arrSize){
    int start = 0;
    int end = arrSize - 1;
    int mid;
    
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int N;
    scanf("%d", &N);
    int count = 0;
    int card[500000] = {0,};
    for(int i = 0; i < N; i++){
        scanf("%d", &card[i]);
    }
    qsort(card, N, sizeof(int), compare);
    int M;
    int cardNum[500000] = {0,};
    scanf("%d", &M);
    for(int i = 0; i < M; i ++){
        scanf("%d", &cardNum[i]);
        if(BSearch(card, cardNum[i], N) == -1) printf("%d ", 0);
        else printf("%d ", 1);
    }
    return 0;
}