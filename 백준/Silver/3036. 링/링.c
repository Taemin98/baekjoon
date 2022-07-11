//링
#include<stdio.h>

int getGCF(int a, int b){
    int gcf = 1;
    for(int i = 2; i <= b; i++){
        if(a % i == 0 && b % i == 0) gcf = i;
    }
    return gcf;
}

int main(){
    int N;
    scanf("%d", &N);
    int ring[100] = {0,};
    for(int i = 0; i < N; i++){
        scanf("%d", &ring[i]);
        if(i != 0){
            if(ring[0] % ring[i] == 0){
                printf("%d/%d\n", ring[0]/ring[i], 1);
            }
            else{
                printf("%d/%d\n", ring[0]/getGCF(ring[0], ring[i]),ring[i]/getGCF(ring[0], ring[i]));
            }
        }
    }
    return 0;
}