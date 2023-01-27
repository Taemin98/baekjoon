//수들의 합5
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int count = 0;
    int sum = 0;
    int i = 1;
    int idx = 1;

    while(idx <= N){
        for(i = idx; i <= N; i++){
            sum += i;
            if(sum == N){
                count++;
                sum = 0;
                break;
            }
            else if(sum > N){
                sum = 0;
                break;
            }
        }
        idx++; 
    }
    printf("%d\n", count);

    return 0;
}