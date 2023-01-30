//좋은 자동차 번호판
#include<stdio.h>

int ab(int num){
    if(num < 0) return num *= -1;
    else return num;
}

int sq(int num, int num2){
    int result = 1;
    if(num2 == 0) return 1;
    for(int i = 0; i < num2; i++) result *= num;
    return result;
}

int main(){
    int N;
    scanf("%d", &N);
    char S[9] = {0,};
    int num, num2;
    int result;

    for(int i = 0; i < N; i++){
        scanf("%s", S);
        num = (S[0]-65)*sq(26, 2) + (S[1]-65)*sq(26, 1) + (S[2]-65)*sq(26, 0);
        num2 = (S[4]-48)*1000 + (S[5]-48)*100 + (S[6]-48)*10 + (S[7]-48);
        result = num - num2;
        if(ab(result) <= 100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}