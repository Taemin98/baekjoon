#include<stdio.h>

int main(){
    int num, new_num;
    int cycle = 0;
    scanf("%d", &num);

    new_num = num;
    do{
        if(new_num < 10){
            new_num = new_num * 10 + new_num;
            cycle++;
        }
        else{
            new_num = (new_num % 10 * 10) + (new_num / 10 + new_num % 10) % 10;
            cycle++;
        }
    } while(num != new_num);

    printf("%d", cycle);
    
    return 0;
}