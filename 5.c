// Lab 5: Linked List Operations 
// AIM: 
// To implement a singly linked list and perform insertion and traversal operations. 
// THEORY: 
// A linked list is a dynamic data structure composed of nodes, where each node contains data 
// and a pointer to the next node. 
// PROGRAM: 
#include<stdio.h> 
#include<stdlib.h> 
 
struct Node { 
    int data; 
    struct Node* next; 
}; 
 
void display(struct Node* head) { 
    while(head != NULL) { 
        printf("%d -> ", head->data); 
        head = head->next; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node *head = NULL, *temp, *newNode; 
    int n, data; 
    printf("Enter number of nodes: "); 
    scanf("%d", &n); 
 
    for(int i = 0; i < n; i++) { 
        newNode = (struct Node*)malloc(sizeof(struct Node)); 
        printf("Enter data: "); 
        scanf("%d", &newNode->data); 
        newNode->next = NULL; 
 
        if(head == NULL) 
            head = temp = newNode; 
        else { 
            temp->next = newNode; 
            temp = newNode; 
        } 
    } 
display(head); 
return 0; 
} 
// OUTPUT: 
// Enter number of nodes: 3 
// Enter data: 10 
// Enter data: 20 
// Enter data: 30 
// 10 -> 20 -> 30 -> NULL