#include<stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int sum = 0;
    int min = N;
    int pn[10001];
    pn[0] = 2;
    int num = 3;
    int i = 1;
  
    while( num <= N ){
        int counter = 0;
        for(int j = 0; j < i; j++){
            if(num % pn[j] == 0){
                counter++;
                break;
            }
        }
        if(counter == 0) pn[i++] = num;
        num++;
    }
    
    int count = 0;
    for(int k = 0; pn[k] <= N && pn[k] > 0; k++){
        if(pn[k] >= M){
            if(min >= pn[k]) min = pn[k];
            sum += pn[k];
            count++;
        }
    }

    if(count != 0){
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    else printf("%d", -1);

    return 0;
}