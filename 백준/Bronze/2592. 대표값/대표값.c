#include<stdio.h>

int main(){
    int num[10] = {0,};
    int sum = 0;
    int count[1000] = {0,};
    int max = 0;
    int mode = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        sum += num[i];
        count[num[i]]++;
    }
    for(int i = 0; i < 1000; i++){
        if(count[i] > max){
            max = count[i];
            mode = i;
        }
    }
    printf("%d\n", sum / 10);
    printf("%d", mode);
    return 0;
}