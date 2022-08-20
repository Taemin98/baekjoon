#include<stdio.h>
#include<string.h>

int main(){
    char S[101] = {0,};
    scanf("%[^\n]s", S);
    int carry;

    for(int i = 0; i < strlen(S); i++){
        if(S[i] >= 65 && S[i] <= 90){
            S[i] += 13;
            if(S[i] > 90){
                carry = S[i] - 90;
                S[i] = 64 + carry;
            }
        }
        else if(S[i] >= 97 && S[i] <= 122){
            S[i] -= 13;
            if(S[i] < 97){
                carry = 97 - S[i];
                S[i] = 123 - carry;
            }           
        }
    }
    printf("%s", S);
    return 0;
}