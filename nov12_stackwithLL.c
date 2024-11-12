#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void push(struct node** top,int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(!newNode){
        printf("Memory error\n");
        return;
    }
    newNode->data = value;
    newNode->next =*top;
    *top=newNode;
    printf("pushed %d onto the stack\n",value);
}
int pop(struct node**top){
    if(*top==NULL){
        printf("Stack is empty\n");
        return -1;
    }
    struct node* temp=*top;
    int poppedvalue=temp->data;
    *top=(*top)->next;
    free(temp);
    printf("popped %d from stack\n",poppedvalue);
    return poppedvalue;
}
void dispstack(struct node *top){
    if(top==NULL){
        \
        printf("Stack is empty\n");
    }else{
        printf("stack elements are:");
        while(top!=NULL){
            printf("%d ",top->data);
            top=top->next;
        }
        printf("\n");
    }
}
int main(){
    struct node* stack=NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    dispstack(stack);
    pop(&stack);
    dispstack(stack);
    return 0;
}
