// 피보나치 수열
#include <stdio.h>
#include <string.h>

typedef struct _num{
    char N[1001];
} Num;

Num num[5000];

void fibonacci(int n){
    num[0].N[0] = '1';
    num[1].N[0] = '1';
    int sum = 0;
    int carry = 0;
    int i, j, k;
    for(i = 2; i <= n; i++){
        for(j = 0; j <= strlen(num[i-1].N); j++){
            sum = 0;
            if(num[i-2].N[j] != '\0') sum += (num[i-2].N[j]-'0');
            if(num[i-1].N[j] != '\0') sum += (num[i-1].N[j]-'0');
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            if(j != strlen(num[i-1].N) || sum == 1) num[i].N[j] = (sum + '0');
        }   
    }
}

int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n);
    for(int i = strlen(num[n-1].N)-1; i >= 0; i--) printf("%d", num[n-1].N[i] - '0');
    return 0;
}