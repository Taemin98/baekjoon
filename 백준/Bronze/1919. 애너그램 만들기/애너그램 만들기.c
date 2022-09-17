//애너그램 만들기
#include<stdio.h>
#include<string.h>

int main(){
    char S1[1001];
    char S2[1001];
    scanf("%s %s", S1, S2);
    int sum = strlen(S1) + strlen(S2);

    for(int i = 0; i < strlen(S1); i++){
        for(int j = 0; j < strlen(S2); j++){
            if(S1[i] == S2[j]){
                S1[i] = -1; S2[j] = -2;
                sum -= 2;
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}