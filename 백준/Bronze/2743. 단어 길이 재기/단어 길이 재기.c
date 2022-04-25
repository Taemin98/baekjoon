#include <stdio.h>

int main(){
    char word[101];
    int count = 0;
    scanf("%s", word);
    for(int i = 0; word[i] != NULL; i++) count++;
    printf("%d", count);
    return 0;
}