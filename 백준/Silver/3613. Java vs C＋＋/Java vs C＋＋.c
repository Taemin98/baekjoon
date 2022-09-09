//Java Vs C++
#include<stdio.h>
#include<string.h>

void toJava(char arr[], int idx){
    int size = strlen(arr);
    arr[idx+1] -= 32;
    arr[idx] = '\0';
    for(int i = idx; i < size; i++){
        if(i == size - 1) arr[i] = '\0';
        else arr[i] = arr[i+1];
    }
}

void toCpp(char arr[], int idx){
    int size = strlen(arr);
    arr[idx] += 32;
    for(int i = size - 1; i >= idx; i--){
        arr[i+1] = arr[i];
        if(i == idx) arr[i] = '_';
    }
}

int main(){
    char var[1000] = {0,};
    scanf("%s", var);
    int flag = 0;

    for(int i = 0; i < strlen(var); i++){
        if(var[i] == '_'){
            flag = 2; break;
        }
        else if(var[i] < 91 && var[i] >= 65){
            flag = 1; break;
        }
    }

    if(flag == 2){
        if(var[0] == '_') {printf("Error!"); return 0;}
        else if(var[strlen(var)-1] == '_') {printf("Error!"); return 0;}
        for(int i = 0; i < strlen(var); i++){
            if(var[i] < 91 && var[i] >= 65) {
                printf("Error!");
                return 0;
            }
            else if(var[i] == '_' && var[i+1] == '_'){
                printf("Error!");
                return 0;
            }
        }
        for(int i = 0; i < strlen(var); i++){
            if(var[i] == '_') toJava(var, i);
        }
    }
    else if(flag == 1){
        if(var[0] < 91 && var[0] >= 65) {printf("Error!"); return 0;}
        for(int i = 0; i < strlen(var); i++){
            if(var[i] == '_') {printf("Error!"); return 0;}
            else if(var[i] < 91 && var[i] >= 65) toCpp(var, i);
        } 
    }
    printf("%s", var);
    return 0;
}