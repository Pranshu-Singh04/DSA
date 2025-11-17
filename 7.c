// Lab 7: Queue Implementation 
// AIM: 
// To implement a queue using an array. 
// THEORY: 
// A queue is a FIFO data structure that supports enqueue and dequeue operations. 
// PROGRAM: 
#include<stdio.h> 
#define SIZE 100 
 
int queue[SIZE], front = -1, rear = -1; 
 
void enqueue(int val) { 
    if(rear < SIZE-1) { 
        if(front == -1) front = 0; 
        queue[++rear] = val; 
    } else printf("Queue Overflow\n"); 
} 
 
void dequeue() { 
    if(front == -1 || front > rear) 
        printf("Queue Underflow\n"); 
    else 
        printf("Dequeued: %d\n", queue[front++]); 
} 
 
void display() { 
    for(int i = front; i <= rear; i++) 
        printf("%d ", queue[i]); 
    printf("\n"); 
} 
 
int main() { 
    enqueue(10); enqueue(20); enqueue(30); 
    display(); 
    dequeue(); 
    display(); 
    return 0; 
}