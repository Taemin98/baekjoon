#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000] = {0,};
    int N; 
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%s", arr);
        if(arr[strlen(arr) / 2] == arr[strlen(arr) / 2 - 1]) printf("Do-it\n");
        else printf("Do-it-Not\n");
    }
    return 0;
}