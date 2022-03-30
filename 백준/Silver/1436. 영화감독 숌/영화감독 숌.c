#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int num = 666;
    int count = 0;
    int temp;

    while(count != N){
        temp = num;
        while(temp >= 666){
            if(temp % 1000 == 666){ 
                count++;
                break;
            }
            else temp /= 10;
        }
        num++;
    }

    printf("%d", num-1);

    return 0;
}