#include<stdio.h>

int main(){
    int arr[9] = {0,};
    int dwarf[7] = {0,};
    int sum = 0;
    int diff = 0;
    int temp = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    diff = sum - 100;
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            if(arr[i] + arr[j] == diff){
                arr[i] = -1;
                arr[j] = -1;
                break;
            }
        }
        if(arr[i] == -1) break;
    }
    int a = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] != -1) dwarf[a++] = arr[i];
    }
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 7; j++){
            if(dwarf[i] > dwarf[j]){
                temp = dwarf[i];
                dwarf[i] = dwarf[j];
                dwarf[j] = temp;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        printf("%d\n", dwarf[i]);
    }
    return 0;
}