#include<stdio.h>
 
int main(){
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    int sum = 0;
    int count = 0;
    int min = N;
    for(int i = 1; i <= 100; i++){
        if(i*i >= M && i*i <= N){
            sum += i*i;
            count++;
            if(count == 1) min = i*i;
        }
    }
    if(count != 0)printf("%d\n%d\n", sum, min);
    else printf("%d", -1);
    return 0;
}