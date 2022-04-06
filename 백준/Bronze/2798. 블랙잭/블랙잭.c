#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N+1];
    int min = 300000;
    int idx[3];
    
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]); 

    for(int i = 0; i < N; i++){
        for(int j = 1; j < N && i!=j; j++){
            for(int k = 2; k < N && j!=k; k++){
                if(M - (arr[i] + arr[j] + arr[k]) >= 0){
                    if(M - (arr[i] + arr[j] + arr[k]) <= min){    
                        min = M - (arr[i] + arr[j] + arr[k]);
                        idx[0] = i;
                        idx[1] = j;
                        idx[2] = k;
                    }
                }
            }
        }
    }

    printf("%d", arr[idx[0]] + arr[idx[1]] + arr[idx[2]]);

    return 0;
}