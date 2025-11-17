// Lab 8: Tree Operations 
// AIM: 
// To implement a binary tree and perform inorder traversal. 
// THEORY: 
// A binary tree is a non-linear data structure where each node can have at most two children. 
//  Traversal refers to visiting all nodes in a specific order: 
// ● Inorder: Left, Root, Right 
 
// ● Preorder: Root, Left, Right 
 
// ● Postorder: Left, Right, Root 
 
PROGRAM (Inorder Traversal): 
#include<stdio.h> 
#include<stdlib.h> 
 
struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
 
struct Node* create(int data) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->left = newNode->right = NULL; 
    return newNode; 
} 
 
void inorder(struct Node* root) { 
    if(root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
    } 
} 
 
int main() { 
    struct Node* root = create(1); 
    root->left = create(2); 
    root->right = create(3); 
root->left->left = create(4); 
root->left->right = create(5); 
printf("Inorder Traversal: "); 
inorder(root); 
return 0; 
} 
// OUTPUT: 
// Inorder Traversal: 4 2 5 1 3