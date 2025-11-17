// Lab 9: Binary Search Tree (BST) 
// AIM: 
// To implement insertion and inorder traversal in a Binary Search Tree (BST). 
// THEORY: 
// A BST is a binary tree where: 
// ● The left child has values less than the root. 
 
// ● The right child has values greater than the root. 
 
// This allows efficient searching, insertion, and deletion. 
// PROGRAM: 
#include<stdio.h> 
#include<stdlib.h> 
 
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
 
struct Node* insert(struct Node* root, int key) { 
    if(root == NULL) { 
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
        temp->data = key; 
        temp->left = temp->right = NULL; 
        return temp; 
    } 
    if(key < root->data) 
        root->left = insert(root->left, key); 
    else 
        root->right = insert(root->right, key); 
    return root; 
} 
 
void inorder(struct Node* root) { 
    if(root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
    } 
} 
 
int main() { 
    struct Node* root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
 
    printf("BST Inorder Traversal: "); 
    inorder(root); 
    return 0; 
} 
 
// OUTPUT: 
// BST Inorder Traversal: 20 30 40 50 60 70 80