//스택
#include<stdio.h>
#include<string.h>
#define STACK_SIZE 10000

int stack[STACK_SIZE];
int top = -1;
 
int empty(){
    if(top < 0) return 1;
    else return 0;
}

int size(){
    return top + 1;
}

int getTop(){
    if(empty()== 1) return -1;
    else return stack[top];
}
 
void push(int value){
    stack[++top] = value;
}
 
int pop(){
    if(empty()== 1) return -1;
    else return stack[top--];
}
 
int main(){
    int N;
    scanf("%d", &N);
    char temp[10] = {0,};
    int temp2;

    for(int i = 0; i < N; i++){
        scanf("%s", temp);
        if(strcmp(temp, "push") == 0){
            scanf("%d", &temp2);
            push(temp2);
        }
        else if(strcmp(temp, "pop") == 0){
            printf("%d\n", pop());
        }
        else if(strcmp(temp, "size") == 0){
            printf("%d\n", size());
        }
        else if(strcmp(temp, "empty") == 0){
            printf("%d\n", empty());
        }
        else if(strcmp(temp, "top") == 0){
            printf("%d\n", getTop());
        }
    }
    return 0;
}