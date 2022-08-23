#include<stdio.h>

typedef struct {
    int position;
    int check;
}Cow;

int main(){
    int N;
    scanf("%d", &N);
    Cow cow[10] = {0,};
    int a, b;
    int count = 0;

    for(int i = 0; i < N; i++){
        scanf("%d %d", &a, &b);
        if(cow[a-1].check == 0) {
            cow[a-1].position = b;
            cow[a-1].check++;
        }
        else if(cow[a-1].check > 0 && cow[a-1].position != b){
            cow[a-1].position = b;
            count++;    
        }
    }
    printf("%d\n", count);
    return 0;
}