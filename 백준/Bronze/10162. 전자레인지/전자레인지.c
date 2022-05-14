# include<stdio.h>

int main(){
    int T;
    int A = 0;
    int B = 0;
    int C = 0;
    int result = 0;
    scanf("%d", &T);

    while(T != 0){
        if(T / 300 > 0){
            T -= 300;
            A++;
        }
        else if(T / 60 > 0){
            T -= 60;
            B++;
        }
        else if(T / 10 > 0){
            T -= 10;
            C++;
        }
        else{
            result = -1;
            break;
        }
    }
    if(result == 0) printf("%d %d %d", A, B, C);
    else printf("%d", result);
    
    return 0;
}