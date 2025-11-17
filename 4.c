// Lab 4: Sorting Techniques 
// AIM: 
// To implement sorting using the Bubble Sort technique. 
// THEORY: 
// Sorting is the process of arranging elements in ascending or descending order. 
// ● Bubble Sort: Repeatedly compares adjacent elements and swaps them if they are in 
// the wrong order. 
 
// PROGRAM: 
#include<stdio.h> 
 
void bubbleSort(int arr[], int n) { 
    for(int i = 0; i < n-1; i++) { 
        for(int j = 0; j < n-i-1; j++) { 
            if(arr[j] > arr[j+1]) { 
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        } 
    } 
} 
 
int main() { 
    int arr[100], n; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter elements: "); 
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]); 
 
    bubbleSort(arr, n); 
 
    printf("Sorted array: "); 
    for(int i = 0; i < n; i++) printf("%d ", arr[i]); 
    return 0; 
} 
 
// OUTPUT: 
// Enter number of elements: 5 
// Enter elements: 3 5 2 4 1 
// Sorted array: 1 2 3 4 5