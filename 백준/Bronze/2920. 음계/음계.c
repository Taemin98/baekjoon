#include<stdio.h>

int main(){
    int arr[8] = {0,};
    int ac = 0;
    int dc = 0;
    for(int i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 7; i++){
        if(arr[0] == 1 && arr[i+1] - arr[i] == 1) ac++;
        else if(arr[0] == 8 && arr[i] - arr[i+1] == 1) dc++;
    }
    if(ac == 7) printf("ascending");
    else if(dc == 7) printf("descending");
    else printf("mixed");
    return 0;   
}