//나무 자르기
#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int tree[1000001] = {0,};
    long long int left, mid, right, sum, max;
    long long int height = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &tree[i]);
        if(tree[i] > max) max = tree[i];
    }
    left = 1; right = max;

    while(left <= right){
        mid = (left + right) / 2;
        for(int i = 0; i < N; i++){
            if(tree[i] > mid) sum += tree[i] - mid;
        }
        if(sum < M) right = mid - 1;
        else{
            if(height < mid) height = mid;
            left = mid + 1;
        }
        sum = 0;
    }
    printf("%lld", height);

    return 0;
}