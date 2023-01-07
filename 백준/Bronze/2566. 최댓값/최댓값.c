#include<stdio.h>

int main(){
    int arr[9][9] = {0,};
    int max = 0;
    int a, b;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] >= max) {
                max = arr[i][j];
                a = i; b = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", a + 1, b + 1);

    return 0;
}