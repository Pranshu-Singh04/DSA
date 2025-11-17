// Lab 6: Stack and Recursion 
// AIM: 
// To implement a stack using an array and demonstrate recursion using factorial calculation. 
// THEORY: 
// ● Stack is a LIFO structure. Basic operations: push, pop, display. 
 
// ● Recursion is when a function calls itself. 
 
PROGRAM (Stack using Array): 
#include<stdio.h> 
#define SIZE 100 
 
int stack[SIZE], top = -1; 
 
void push(int val) { 
    if(top < SIZE - 1) 
        stack[++top] = val; 
    else 
        printf("Stack Overflow\n"); 
} 
 
void pop() { 
    if(top >= 0) 
        printf("Popped: %d\n", stack[top--]); 
    else 
        printf("Stack Underflow\n"); 
} 
 
void display() { 
    for(int i = top; i >= 0; i--) 
        printf("%d ", stack[i]); 
    printf("\n"); 
} 
 
int main() { 
    push(10); push(20); push(30); 
    display(); 
    pop(); 
    display(); 
    return 0; 
} 
 
PROGRAM (Recursion Example - Factorial): 
int factorial(int n) { 
if(n == 0) return 1; 
return n * factorial(n - 1); 
}