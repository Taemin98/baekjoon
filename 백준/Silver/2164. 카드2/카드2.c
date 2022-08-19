#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
} Node;

typedef struct _queue{
    Node *front;
    Node *rear;
    int count;
} Queue;

void initQueue(Queue *queue){
    queue->front = queue->rear = NULL;
    queue -> count = 0;
}

int isEmpty(Queue *queue){
    return queue -> count == 0;
}

void enqueue(Queue *queue, int data){
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(isEmpty(queue)){
        queue->front = newNode;
    }
    else{
        queue->rear->next = newNode;
    }
    queue->rear = newNode;
    queue->count++;
}

int dequeue(Queue *queue){
    int data;
    Node *ptr;

    if(isEmpty(queue)){
        printf("Erorr : Empty Queue");
        return 0;
    }
    ptr = queue->front;
    data = ptr->data;
    queue->front = ptr->next;
    free(ptr);
    queue->count--;
    return data;
}

void change(Queue *queue){
    enqueue(queue, queue->front->data);
    dequeue(queue);
}

int main(){
    int N;
    scanf("%d", &N);
    Queue *Q = (Queue *) malloc(sizeof(Queue));
    initQueue(Q);
    for(int i = 1; i <= N; i++){
        enqueue(Q, i);
    }

    while(1){
        if(Q->count == 1){
            printf("%d", dequeue(Q));
            break;
        }
        dequeue(Q);
        change(Q);
    }
    free(Q);
    return 0;
}