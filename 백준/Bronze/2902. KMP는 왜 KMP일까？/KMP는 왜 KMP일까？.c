#include<stdio.h>

int main(){
    char name[101];
    scanf("%s", name);
    printf("%c", name[0]);
    for(int i = 1; name[i] != NULL; i++){
        if(name[i] == '-') printf("%c", name[i+1]);
    }
    return 0;
}