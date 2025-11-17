// Lab 2: Programs based on 2-D Array 
// Operations 
// AIM: 
// To perform addition of two matrices using 2D arrays. 
// THEORY: 
// A 2-D array stores data in row and column format. Matrix addition 
// involves adding corresponding elements from two matrices of the same 
// dimension. 
// PROGRAM: 
#include<stdio.h> 
 
int main() { 
    int a[10][10], b[10][10], c[10][10], i, j, r, c1; 
    printf("Enter rows and columns: "); 
    scanf("%d%d", &r, &c1); 
 
    printf("Enter first matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < c1; j++) 
            scanf("%d", &a[i][j]); 
 
    printf("Enter second matrix:\n"); 
    for(i = 0; i < r; i++) 
        for(j = 0; j < c1; j++) 
            scanf("%d", &b[i][j]); 
 
    printf("Sum of matrices:\n"); 
    for(i = 0; i < r; i++) { 
        for(j = 0; j < c1; j++) { 
            c[i][j] = a[i][j] + b[i][j]; 
            printf("%d ", c[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 
 
 
// OUTPUT: 
// Enter rows and columns: 2 2 
// Enter first matrix: 
// 1 2 
// 3 4 
// Enter second matrix: 
// 5 6 
// 7 8 
// Sum of matrices: 
// 6 8 
// 10 12 