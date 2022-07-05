// 좌표 정렬하기
#include<stdio.h>
#include<stdlib.h>

typedef struct pos{
    int x;
    int y;
} Pos;

int compare(const void *a, const void *b){
    Pos p1 = *(Pos *)a;
    Pos p2 = *(Pos *)b;
    if(p1.x > p2.x) return 1;
    else if (p1.x < p2.x) return -1;
    else {
        if(p1.y > p2.y) return 1;
        else if(p1.y < p2.y) return -1;
        return 0;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    Pos arr[100000];

    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(Pos), compare);

    for(int i = 0; i < N; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}