#include<stdio.h>

int main(){
    int T;
    int num[16] = {0,};
    int sum = 0;
    scanf("%d", &T);

    for(int j = 0; j < T; j++){
        sum = 0;
        for(int i = 0; i < 16; i++ ){
            scanf("%1d", &num[i]);
            if(i % 2 == 0){
                if(num[i] * 2 >= 10) num[i] = num[i] * 2 % 10 + 1;
                else num[i] = num[i] * 2;
            }
            sum += num[i];
        }
        if(sum % 10 == 0) printf("%c\n", 'T');
        else printf("%c\n", 'F');
    }
    return 0;
}