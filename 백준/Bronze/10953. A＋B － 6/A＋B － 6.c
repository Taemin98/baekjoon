#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    char arr[4];

    for(int i = 0; i < T; i++){
        scanf("%s", arr);
        printf("%d\n", arr[0]-'0' + arr[2]-'0');
    }
    return 0;
}