//할리갈리
#include<stdio.h>
#include<string.h>

int main(){
    int N;
    scanf("%d", &N);
    char fruit[11] = {0,};
    int num;
    int arr[4] = {0,};
    int flag = 0;

    for(int i = 0; i < N; i++){
        scanf("%s %d", fruit, &num);
        if(strcmp(fruit, "STRAWBERRY") == 0) arr[0] += num;
        else if(strcmp(fruit, "BANANA") == 0) arr[1] += num;
        else if(strcmp(fruit, "LIME") == 0) arr[2] += num;
        else if(strcmp(fruit, "PLUM") == 0) arr[3] += num;
    }
    for(int i = 0; i < 4; i++){
        if(arr[i] == 5) flag++;
    }

    if(flag >= 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}