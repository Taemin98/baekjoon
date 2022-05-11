#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[50] = {0,};
    int temp = 0;

    for(int i = 0; i < num; i++) scanf("%d", &arr[i]);

        if(num == 1) printf("%d", arr[0]*arr[0]);

        else{
            for(int i = 0; i < num; i++){
                for(int j = i + 1; j < num; j++){
                    if(arr[i] > arr[j]){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
        }
            printf("%d", arr[0] * arr[num-1]);
        }
    return 0;
}