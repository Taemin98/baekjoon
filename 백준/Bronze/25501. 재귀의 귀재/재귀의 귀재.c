//재귀의 귀재
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count;

void init(char arr[]){
    for(int i = 0; i < strlen(arr); i++){
        arr[i] = '\0';
    }
}

int recursion(const char *s, int l, int r){
    count += 1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;
    scanf("%d", &T);
    char temp[1001] = {0,};

    for(int i = 0; i < T; i++){
        scanf("%s", temp);
        printf("%d ", isPalindrome(temp));
        printf("%d\n", count);
        count = 0;
        init(temp);
    }

    return 0;
}