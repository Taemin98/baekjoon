//세수정렬
#include<stdio.h>

int main(){
    int num[3] = {0,};
    for(int i = 0; i < 3; i ++) scanf("%d", &num[i]);
    int temp;

    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 3; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++) printf("%d ", num[i]);
    return 0;
}