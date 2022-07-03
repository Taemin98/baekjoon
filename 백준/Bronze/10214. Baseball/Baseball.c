#include<stdio.h>
 
int main(){
    int T;
    scanf("%d", &T);
    int a, b;
    int korea = 0;
    int yonsei = 0;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d %d", &a, &b);
            yonsei += a;
            korea += b;            
        }
        if(yonsei > korea) printf("Yonsei\n");
        else if(yonsei < korea) printf("Korea\n");
        else printf("Draw\n");
    }
    return 0;
}