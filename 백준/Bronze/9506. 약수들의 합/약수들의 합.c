#include<stdio.h>

int main(){
    int n;
    int divisor[100000] = {0,};
    int sum = 0;
    int z = 0;
    
    while(1){
        for(int i = 0; divisor[i] != 0; i++) divisor[i] = 0;
        sum = 0;
        z = 0;
        scanf("%d", &n); 
        if(n == -1) break;
        else {
            for(int i = 1; i <= n/2; i++){
                if(n % i == 0) {
                    divisor[z++] = i;
                    sum += i;
                }
            }
            if(n == sum){
                printf("%d = 1", n);
                for(int j = 1; divisor[j] != 0; j++) printf(" + %d", divisor[j]);
            }
            else if(n != sum) printf("%d is NOT perfect.", n);
            printf("\n");
        }
    }
    return 0;
}