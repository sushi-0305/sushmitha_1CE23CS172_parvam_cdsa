#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct queue{
    struct node* front,*rear;
};
struct queue* createqueue(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(struct queue* q,int value){
    struct node* newNode= (struct node*)malloc(sizeof(struct node));
    if(!newNode){
        printf("memory error\n");
        return;
    }
    newNode->data=value;
    newNode->next=NULL;
    if(q->rear==NULL){
        q->front=q->rear=newNode;
    }else{
        q->rear->next=newNode;
        q->rear=newNode;
    }
    printf("enqueued %d to the queue\n",value);
}
int dequeue(struct queue*q){
    if(q->front==NULL){
        printf("queue is empty\n");
        return -1;
    }
    struct node*temp=q->front;
    int dequeuevalue=temp->data;
    q->front=q->front->next;
    if(q->front==NULL){
        q->rear=NULL;
    }
    free(temp);
    printf("dequeued %d from the queue\n",dequeuevalue);
    return dequeuevalue;
}
void dispqueue(struct queue*q){
    struct node*temp=q->front;
    if(q->front==NULL){
        printf("queue is empty\n");
    }else{
        printf("queue elements:");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    printf("\n");
    }
}
int main(){
    struct queue* q = createqueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q,30);
    dispqueue(q);
    dequeue(q);
    dispqueue(q);
    return 0;
}
