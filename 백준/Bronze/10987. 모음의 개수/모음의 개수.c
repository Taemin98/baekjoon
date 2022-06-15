#include<stdio.h>

int main(){
    int count = 0;
    char word[101] = {0,};
    scanf("%s", word);
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}