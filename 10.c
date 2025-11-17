// Lab 10: Graph Operations 
// AIM: 
// To implement a graph using adjacency matrix and perform DFS and BFS traversal. 
// THEORY: 
// A graph is a collection of vertices (nodes) and edges (connections). 
// ● BFS (Breadth First Search): Uses a queue to explore nodes level by level. 
 
// ● DFS (Depth First Search): Uses recursion (or stack) to explore as far as possible 
// along each branch. 
 
// PROGRAM: 
#include<stdio.h> 
#define SIZE 10 
 
int visited[SIZE]; 
int queue[SIZE], front = -1, rear = -1; 
 
void bfs(int a[SIZE][SIZE], int n, int start) { 
    for(int i = 0; i < SIZE; i++) visited[i] = 0; 
    front = rear = -1; 
    queue[++rear] = start; 
    visited[start] = 1; 
    while(front != rear) { 
        start = queue[++front]; 
        printf("%d ", start); 
        for(int i = 0; i < n; i++) { 
            if(a[start][i] && !visited[i]) { 
                queue[++rear] = i; 
                visited[i] = 1; 
            } 
        } 
    } 
} 
 
void dfs(int a[SIZE][SIZE], int n, int start) { 
    printf("%d ", start); 
    visited[start] = 1; 
    for(int i = 0; i < n; i++) { 
        if(a[start][i] && !visited[i]) 
            dfs(a, n, i); 
    } 
} 
 
int main() { 
    int a[SIZE][SIZE], n, start; 
    printf("Enter number of vertices: "); 
    scanf("%d", &n); 
    printf("Enter adjacency matrix:\n"); 
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            scanf("%d", &a[i][j]); 
 
    printf("Enter starting vertex: "); 
    scanf("%d", &start); 
 
    printf("BFS: "); 
    bfs(a, n, start); 
 
    for(int i = 0; i < SIZE; i++) visited[i] = 0; 
    printf("\nDFS: "); 
    dfs(a, n, start); 
 
    return 0; 
} 
 
// SAMPLE ADJACENCY MATRIX (4 Vertices): 
// 0 1 1 0 
// 1 0 0 1 
// 1 0 0 1 
// 0 1 1 0 
 
// OUTPUT: 
// BFS: 0 1 2 3 
// DFS: 0 1 3 2