#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int count = 0;

    for(int i = 0; i < N; i++){
        char word[101];
        int alphabet[27] = {0};
        scanf("%s", word);
        for(int j = 0; word[j] != '\0'; j++){
            if(alphabet[(int)word[j] - 97] == 0 ){
                alphabet[(int)word[j] - 97]++;
            }
            else if (word[j] == word[j-1]){
                alphabet[(int)word[j] - 97] = 0;
                if(word[j+1] != word[j]) alphabet[(int)word[j] - 97]++;
            }
            else if(alphabet[ (int)word[j] - 97 ] != 0){
                count++;
                break;
            }
        }
    }
    printf("%d", N - count);

    return 0;
}