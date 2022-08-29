//고급여관
#include<stdio.h>

typedef struct {
    int atk;
    int hp;
} Card;

int main(){
    Card A, B;
    scanf("%d %d", &A.atk, &A.hp);
    scanf("%d %d", &B.atk, &B.hp);

    while(1){
        B.hp -= A.atk;
        A.hp -= B.atk;
        if(B.hp <= 0 && A.hp <= 0) {printf("DRAW"); break;}
        else if(B.hp <= 0) {printf("PLAYER A\n"); break;}
        else if(A.hp <= 0) {printf("PLAYER B\n"); break;}
    }
    return 0;
}