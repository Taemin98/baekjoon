#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int r, e, c;

    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &r, &e, &c);
        if(e > r + c) printf("advertise\n");
        else if(e < r + c) printf("do not advertise\n");
        else printf("does not matter\n");
    }
    return 0;
}