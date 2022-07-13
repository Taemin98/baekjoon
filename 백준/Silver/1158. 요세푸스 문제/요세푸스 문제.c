// 요세푸스 문제
#include<stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int num[5000] = {0,};
    int idx = 0;
    int count = 0;
    int count2 = 0;

    for(int i = 0; i < N; i++) num[i] = i + 1;

    printf("<");

    while(count2 < N){
        if(idx >= N) idx -= N;
        else{
            if(num[idx] != 0){
                count++;
                if(count == K) {
                    if(count2 != N -1) printf("%d, ", num[idx]);
                    else printf("%d", num[idx]);
                    num[idx] = 0;
                    idx++;
                    count2++;
                    count = 0;
                }
                else idx++;
            }
            else idx++;
        }
    }
    printf(">\n");
    return 0;
}