//과제 안 내신분...?
#include<stdio.h>

int main(){
    int arr[31] = {0,};
    int temp;
    int result[2] = {0,};
    int idx = 0;

    for(int i = 1; i <= 28; i++) {
        scanf("%d", &temp);
        arr[temp]++;
    }
    for(int i = 1; i <= 30; i++){
        if(arr[i] == 0) result[idx++] = i;
    }
    if(result[0] < result[1]) {printf("%d\n%d", result[0], result[1]);}
    else {printf("%d\n%d", result[1], result[0]);}

    return 0;
}