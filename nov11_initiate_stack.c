#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Stack{
    int data[MAX];
    int top;
};
void initStack(struct Stack *s){
    s->top = -1;
} 
int isEmpty(struct Stack *s){
    return s->top == -1;
}
int isFull(struct Stack *s){
    return s->top == MAX - 1;
}
void push(struct Stack *s, int data){
    if(isFull(s)){
        printf("stack is full!!");
    }
    else{
        s->data[++s->top] = data;
        printf("pushed %d\n", data);
    }
}
void pop(struct Stack *s){
    if(isEmpty(s)){
        printf("stack is empty!!");
    }
    else{
        printf("popped %d\n", s->data[s->top--]);
    }
}
void disp(struct Stack *s){
    if(isEmpty(s)){
        printf("stack is empty!!");
    }
    else{
        printf("stack elements are: ");
        for(int i = 0; i <= s->top; i++){
            printf("%d ", s->data[i]);
        }
        printf("\n");
        }
}
int main(){
    struct Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    disp(&s);
    pop(&s);
    disp(&s);
    return 0;
}
    