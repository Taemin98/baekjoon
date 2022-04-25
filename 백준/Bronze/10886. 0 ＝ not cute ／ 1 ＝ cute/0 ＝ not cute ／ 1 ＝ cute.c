# include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int cute = 0;
    int ncute = 0;
    int num;

    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        if(num == 1) cute++;
        else ncute++;
    }
    if(cute > ncute) printf("Junhee is cute!");
    else printf("Junhee is not cute!"); 

    return 0;
}