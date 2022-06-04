#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    double result;
    char op[4] = {0,};

    for(int i = 0; i < T; i++){
        scanf("%lf", &result);
        scanf("%[^\n]c", op);
        for(int j = 0; op[j] != '\0'; j++){
            if(op[j] == '@'){
                result *= 3;
            }
            else if(op[j] == '%'){
                result += 5;
            }
            else if(op[j] == '#'){
                result -= 7;
            }
        }
        printf("%.2lf\n", result);
    }
    return 0;
}