#include<stdio.h>

int main(){
    int V;
    char vote[16];
    scanf("%d", &V);
    int ca = 0;
    int cb = 0;
    scanf("%s", vote);

    for(int i = 0; i < sizeof(vote); i++){
        if(vote[i] == 'A') ca++;
        else if (vote[i] == 'B') cb++;
    }

    if (ca > cb) printf("A");
    else if(cb > ca) printf("B");
    else if(cb == ca) printf("Tie");

    return 0;
}