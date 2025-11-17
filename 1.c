// Lab 1: Programs based on 1-D Array Operations 
// AIM: 
// To perform basic operations on one-dimensional arrays: insertion, deletion, traversal, and 
// searching. 
// THEORY: 
// A 1-D array is a data structure that holds a fixed number of values of the same type. These 
// values are stored in contiguous memory locations. Key operations: 
// ● Traversal: Visit and process each element. 
 
// ● Insertion: Add a new element at a given position. 
 
//Deletion: Remove an element from a given position. 
 
// Searching: Find the location of a specific element. 
// PROGRAM: 
#include<stdio.h> 
#define SIZE 100 
 
int main() { 
    int arr[SIZE], n, i, pos, elem; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter elements: "); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    printf("\nEnter position to insert and element: "); 
    scanf("%d%d", &pos, &elem); 
    for(i = n; i >= pos; i--) arr[i] = arr[i-1]; 
    arr[pos-1] = elem; 
    n++; 
 
    printf("\nArray after insertion: "); 
    for(i = 0; i < n; i++) printf("%d ", arr[i]); 
 
    printf("\nEnter position to delete: "); 
    scanf("%d", &pos); 
    for(i = pos-1; i < n-1; i++) arr[i] = arr[i+1]; 
    n--; 
printf("\nArray after deletion: "); 
for(i = 0; i < n; i++) printf("%d ", arr[i]); 
return 0; 
} 
// OUTPUT: 
// Enter number of elements: 5 
// Enter elements: 1 2 3 4 5 
// Enter position to insert and element: 3 99 
// Array after insertion: 1 2 99 3 4 5 
// Enter position to delete: 4 
// Array after deletion: 1 2 99 4 5