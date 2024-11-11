#include<stdio.h>
typedef struct{
    int data[5];
    int front,rear;
}Queue;
void initQueue(Queue *q){
    q->front=-1;
    q->rear=-1;
}
int isEmpty(Queue *q){
    return q->front==-1;
}
int isFull(Queue *q){
    return q->rear==4;
}
void enQueue(Queue *q,int x){
    if(isFull(q)){
        printf("Queue is full\n");
        return ;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->data[q->rear]=x;
    q->rear++;
}
int deQueue(Queue *q,int *x){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    *x=q->data[q->front];
    if(q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }
    else{
        q->front++;
    }
    return *x;
}
int peekQueue(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    return q->data[q->front];
}
int main(){
    Queue q;
    int x;
    initQueue(&q);
    enQueue(&q,1);
    enQueue(&q,2);
    enQueue(&q,3);
    enQueue(&q,4);
    printf("%d ",peekQueue(&q));
    printf("%d ",deQueue(&q,&x));
    printf("%d",peekQueue(&q));

}
    


