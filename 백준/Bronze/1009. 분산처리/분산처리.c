#include<stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    int a, b;
    int num;

    for(int i = 0; i < c; i++){
        scanf("%d %d", &a, &b);
        if(a % 10 == 1) printf("%d\n", a % 10);
        else if(a % 10 == 2){
            switch (b % 4)
            {
            case 1 :
                printf("%d\n", 2);
                break;
            case 2 :
                printf("%d\n", 4);
                break;
            case 3 :
                printf("%d\n", 8);
                break;
            case 0 :
                printf("%d\n", 6);
                break;
            }
        }
        else if(a % 10 == 3){
            switch (b % 4)
            {
            case 1 :
                printf("%d\n", 3);
                break;
            case 2 :
                printf("%d\n", 9);
                break;
            case 3 :
                printf("%d\n", 7);
                break;
            case 0 :
                printf("%d\n", 1);
                break;
            }
        }
        else if(a % 10 == 4){
            switch (b % 2)
            {
            case 1 :
                printf("%d\n", 4);
                break;
            case 0 :
                printf("%d\n", 6);
                break;
            }
        }
        if(a % 10 == 5) printf("%d\n", a % 10);
        if(a % 10 == 6) printf("%d\n", a % 10);
        else if(a % 10 == 7){
            switch (b % 4)
            {
            case 1 :
                printf("%d\n", 7);
                break;
            case 2 :
                printf("%d\n", 9);
                break;
            case 3 :
                printf("%d\n", 3);
                break;
            case 0 :
                printf("%d\n", 1);
                break;
            }
        }
        else if(a % 10 == 8){
            switch (b % 4)
            {
            case 1 :
                printf("%d\n", 8);
                break;
            case 2 :
                printf("%d\n", 4);
                break;
            case 3 :
                printf("%d\n", 2);
                break;
            case 0 :
                printf("%d\n", 6);
                break;
            }
        }
        else if(a % 10 == 9){
            switch (b % 2)
            {
            case 1 :
                printf("%d\n", 9);
                break;
            case 0 :
                printf("%d\n", 1);
                break;
            }
        }
        if(a % 10 == 0) printf("%d\n", 10);
    }
    return 0;
}