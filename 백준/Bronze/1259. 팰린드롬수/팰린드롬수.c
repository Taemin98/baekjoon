#include<stdio.h>
#include<string.h>

void strReverse(char arr[], char arr2[]){
    int idx = 0;
    for(int i = 4; i >= 0; i--) {
        if(arr[i] != '\0') arr2[idx++] = arr[i];
    }
}

void initStr(char arr[]){
    for(int i = 0; i < 5; i++) arr[i] = '\0';
}

int main() {
    char num[6] = {0,};
    char num2[6] = {0,};
    while(1){
        initStr(num);  
        initStr(num2);  
        scanf("%s", num);
        if(strcmp(num, "0") == 0) break;
        else{
            strReverse(num, num2);
            if(strcmp(num, num2) == 0) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}