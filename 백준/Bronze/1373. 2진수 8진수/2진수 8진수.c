// 2진수와 8진수
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char binary[1000001] = {0,};
    char octal[1000001] = {0,};
    int idx = 0;
    int temp = 0;
    int sum = 0;
    scanf("%s", binary);

    for(int i = strlen(binary)-1; i >= 0; i--){
        if(temp != 3){
            if(binary[i] == '1') sum += (int)pow(2, temp);
            if(i == 0) octal[idx] = sum + '0';
            temp++;
        }
        else{ 
            octal[idx++] = sum + '0';
            sum = 0;
            temp = 0;
            if(binary[i] == '1') sum += (int)pow(2, temp);
            if(i == 0) octal[idx] = sum + '0';
            temp++;
        }
    }
    for(int i = strlen(octal)-1; i >= 0; i--) printf("%d", octal[i] - '0');
    return 0;
}