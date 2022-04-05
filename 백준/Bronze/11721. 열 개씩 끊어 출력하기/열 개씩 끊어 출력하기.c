#include<stdio.h>

int main(){
    char arr[101] = "";
    scanf("%s", arr);
    char arr2[110] = "";
    int count = 0;
    int plus = 0;

    for(int i = 0; arr[i] != '\0'; i++){
        if(count != 10){
            arr2[i+plus] = arr[i];
            count++;
        }
        else if(count == 10){
            arr2[i+plus] = '\n';
            plus++;
            arr2[i+plus] = arr[i];
            count = 1;
        }
    }

    for(int i = 0; arr2[i] != '\0'; i++) printf("%c", arr2[i]);

    return 0;
}   