#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;
node* createnode(int data) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}
node* insertnode(node* root, int data) {
    if(root == NULL) {
        root = createnode(data);
    }
    else if(data <= root->data) {
        root->left = insertnode(root->left, data);
    }
    else {
        root->right = insertnode(root->right, data);
    }
    return root;
}
void inorder(node* root) {      //left->root->right
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(node* root) {     //root->left->right
    if(root != NULL) {
        printf("%d ", root->data);  
        preorder(root->left);      
        preorder(root->right);
    }
}
void postorder(node* root) {    //left->right->root
    if(root != NULL) {
        postorder(root->left);      
        postorder(root->right);    
        printf("%d ", root->data);  
    }
}
int main() {
    node* root = NULL;
    root = insertnode(root, 5);
    root = insertnode(root, 3);
    root = insertnode(root, 7);
    root = insertnode(root, 2);
    root = insertnode(root, 8);
    root = insertnode(root, 6);
    root = insertnode(root, 9);
    printf("Inorder traversal: ");
    inorder(root);    
    printf("\nPreorder traversal: ");
    preorder(root);  
    printf("\nPostorder traversal: ");
    postorder(root); 
    printf("\n");
    return 0;
}