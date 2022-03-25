#include <stdio.h>
#include <ctype.h>

int main(){
    char word[1000000];
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int count[26] = {0};
    scanf("%s", word);

    for(int i = 0; word[i] != '0'; i++) word[i] = toupper(word[i]);

    for(int i = 0; i < sizeof(alphabet); i++){
        for(int j = 0; word[j] != '\0'; j++){
            if(alphabet[i] == word[j]){
                count[i] += 1;
            }
        }
    }

    int max = 0;
    int index;
    for(int k = 0; k < sizeof(alphabet); k++){
        if(count[k] > max){ 
            max = count[k];
            index = k;
        }
    }
    int eq = 0;
    for(int z = 0; z < sizeof(count); z++){
        if(count[z] == max) eq++;
    }

    eq > 1 ? printf("?") : printf("%c", alphabet[index]);

    return 0;
}