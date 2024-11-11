#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data; 
    struct node* next;
}node;
node* createNode(int value){
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void append(node** head,int value){
    node* newNode=createNode(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void deleteNode(node** head,int value){
    node* temp=*head;
    node* prev=NULL;
    if(temp!=NULL && temp->data==value){
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&& temp->data==value){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("value %d not found in the list\n",value);
        return;
    }
    prev->next=temp->next;
    free(temp);
}
void displist(node* head){
    node* temp = head;
    printf("linked list:");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    } 
    printf("NULL\n");
}
int main(){
    node* head=NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    displist(head);
    deleteNode(&head,20);
    displist(head);
    deleteNode(&head,40);
    return 0;
}