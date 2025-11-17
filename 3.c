// Lab 3: Searching in 1-D Array 
// AIM: 
// To implement linear and binary search algorithms. 
// THEORY: 
// ● Linear Search: Scan each element until the target is found. 
 
// ● Binary Search: Divide and conquer on a sorted array. 
 
PROGRAM (Linear & Binary Search): 
#include<stdio.h> 
 
int linearSearch(int arr[], int n, int key) { 
    for(int i = 0; i < n; i++) 
        if(arr[i] == key) return i; 
    return -1; 
} 
 
int binarySearch(int arr[], int n, int key) { 
    int low = 0, high = n - 1; 
    while(low <= high) { 
        int mid = (low + high)/2; 
        if(arr[mid] == key) return mid; 
        else if(arr[mid] < key) low = mid + 1; 
        else high = mid - 1; 
    } 
    return -1; 
} 
 
int main() { 
    int arr[100], n, key, i; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter sorted elements: "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
 
    int pos = linearSearch(arr, n, key); 
    printf("Linear Search: %s\n", pos != -1 ? "Found" : "Not Found"); 
 
pos = binarySearch(arr, n, key); 
printf("Binary Search: %s\n", pos != -1 ? "Found" : "Not Found"); 
return 0; 
} 