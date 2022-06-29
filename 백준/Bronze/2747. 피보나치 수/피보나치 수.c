#include<stdio.h>

int fibbo(int a){
    int i = 2;
    int arr[46] = {0,};
    arr[0] = 0;
    arr[1] = 1;
    if(a == 0) return arr[0];
    else if(a == 1) return arr[1];
    else{
        for(i; i <= a; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[a];
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d",fibbo(n));
    return 0;
}